#include <stdio.h>

// Function to perform binary search recursively
int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1; // Base case: target not found
    }

    int mid = (low + high) / 2;

    if (arr[mid] == target) {
        return mid; // Target found at index mid
    } else if (arr[mid] > target) {
        return binarySearch(arr, low, mid - 1, target); // Search in left half
    } else {
        return binarySearch(arr, mid + 1, high, target); // Search in right half
    }
}

int main() {
    int n, i, target, result;

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

    // Performing binary search using recursion
    result = binarySearch(arr, 0, n - 1, target);

    // Displaying the result
    if (result != -1) {
        printf("Element %d found at position %d.\n", target, result + 1);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
