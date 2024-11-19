#include <stdio.h>

int main() {
    int n, i, position;

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

    // Taking input for the position of the element to delete
    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &position);

    // Validating position input
    if (position < 1 || position > n) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n);
        return 1;
    }

    // Deleting the element by shifting elements to the left
    for (i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Reducing the size of the array
    n--;

    // Displaying the updated array
    printf("The updated array is:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }

    return 0;
}
