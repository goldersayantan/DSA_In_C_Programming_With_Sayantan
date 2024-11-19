#include <stdio.h>
#define MAX 100 // Maximum size of the stack

int stack[MAX];
int top = -1; // Stack is initially empty

// Function to push an element onto the stack
void push(int element) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d.\n", element);
        return;
    }
    stack[++top] = element;
    printf("Pushed %d onto the stack.\n", element);
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        printf("Stack Underflow! The stack is empty.\n");
        return;
    }
    printf("Popped %d from the stack.\n", stack[top--]);
}

// Function to display the stack
void display() {
    if (top == -1) {
        printf("The stack is empty.\n");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    int choice, element;

    printf("Stack Operations:\n");
    printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Push operation
                printf("Enter the element to push: ");
                scanf("%d", &element);
                push(element);
                break;
            case 2: // Pop operation
                pop();
                break;
            case 3: // Display the stack
                display();
                break;
            case 4: // Exit
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
