#include <stdio.h>

int main() {
    int n, i, element, position;

    // Taking input for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1];  // Array size is increased by 1 to accommodate the new element

    // Taking input for the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Taking input for the element to be inserted and the position
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert the element (1 to %d): ", n + 1);
    scanf("%d", &position);

    // Shifting elements to the right to make space for the new element
    for (i = n - 1; i >= position - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Inserting the element at the specified position
    arr[position - 1] = element;

    // Displaying the updated array
    printf("The updated array is:\n");
    for (i = 0; i <= n; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }

    return 0;
}
