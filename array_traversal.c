#include <stdio.h>

int main() {
    int n, i;

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

    // Displaying the elements of the array
    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("Element at position %d: %d\n", i + 1, arr[i]);
    }

    return 0;
}
