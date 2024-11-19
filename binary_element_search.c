#include <stdio.h>

int main() {
    int n, i, target, low, high, mid, found = 0;

    // Taking input for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Taking input for the sorted elements of the array
    printf("Enter %d sorted elements in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Taking input for the target value to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Initializing low and high pointers
    low = 0;
    high = n - 1;

    // Binary search logic
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            found = 1;
            printf("Element %d found at position %d.\n", target, mid + 1);
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
