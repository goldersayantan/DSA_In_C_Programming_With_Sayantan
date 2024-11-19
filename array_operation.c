#include <stdio.h>

#define MAX 5  // Maximum size of the array

// Function to traverse and display the array
void traverse(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at a specific position
void insert(int arr[], int *size, int element, int position) {
    if (*size >= MAX) {
        printf("Array is full, cannot insert element.\n");
        return;
    }

    if (position < 0 || position > *size) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", *size);
        return;
    }

    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];  // Shift elements to the right
    }
    arr[position] = element;  // Insert element at the specified position
    (*size)++;
    printf("Element %d inserted at position %d.\n", element, position);
}

// Function to delete an element from a specific position
void delete(int arr[], int *size, int position) {
    if (*size == 0) {
        printf("Array is empty, cannot delete element.\n");
        return;
    }

    if (position < 0 || position >= *size) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", *size - 1);
        return;
    }

    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];  // Shift elements to the left
    }
    (*size)--;
    printf("Element deleted from position %d.\n", position);
}

// Function to update an element at a specific position
void update(int arr[], int size, int position, int newElement) {
    if (position < 0 || position >= size) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", size - 1);
        return;
    }

    arr[position] = newElement;  // Update the element at the specified position
    printf("Element at position %d updated to %d.\n", position, newElement);
}

// Function to display the menu and handle user choice
void menu() {
    int arr[MAX], size = 0, choice, element, position, newElement;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Traverse Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Update Element\n");
        printf("5. Display List\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                traverse(arr, size);
                break;
            case 2:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position (0 to %d): ", size);
                scanf("%d", &position);
                insert(arr, &size, element, position);
                break;
            case 3:
                printf("Enter position (0 to %d): ", size - 1);
                scanf("%d", &position);
                delete(arr, &size, position);
                break;
            case 4:
                printf("Enter position (0 to %d): ", size - 1);
                scanf("%d", &position);
                printf("Enter new element: ");
                scanf("%d", &newElement);
                update(arr, size, position, newElement);
                break;
            case 5:
                traverse(arr, size);
                break;
            case 6:
                printf("Exiting program.\n");
                return;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

int main() {
    menu();  // Call the menu function to start the program
    return 0;
}
