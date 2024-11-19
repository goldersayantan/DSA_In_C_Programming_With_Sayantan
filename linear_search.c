#include <stdio.h>

int main() {
    int n, i, search, found = 0;

    // Taking input for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Taking input for the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Taking input for the number to search
    printf("Enter the number to search: ");
    scanf("%d", &search);

    // Performing linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = 1;
            printf("Number %d found at position %d.\n", search, i + 1);
            break;
        }
    }

    if (!found) {
        printf("Number %d not found in the array.\n", search);
    }

    return 0;
}
