#include <stdio.h>
#define MAX 5  // Maximum size of the circular queue

int queue[MAX];
int front = -1, rear = -1;  // Initialize front and rear to indicate an empty queue

// Function to check if the queue is full
int isFull() {
    return (rear + 1) % MAX == front;
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1;
}

// Function to enqueue (add an element to the circular queue)
void enqueue(int element) {
    if (isFull()) {
        printf("Queue Overflow! Cannot enqueue %d.\n", element);
        return;
    }
    if (front == -1) {
        front = 0;  // If queue is empty, set front to 0
    }
    rear = (rear + 1) % MAX;
    queue[rear] = element;
    printf("Enqueued %d to the queue.\n", element);
}

// Function to dequeue (remove an element from the circular queue)
void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! The queue is empty.\n");
        return;
    }
    printf("Dequeued %d from the queue.\n", queue[front]);
    if (front == rear) {
        front = rear = -1;  // Reset to empty when only one element is left
    } else {
        front = (front + 1) % MAX;
    }
}

// Function to display the queue
void display() {
    if (isEmpty()) {
        printf("The queue is empty.\n");
        return;
    }
    printf("Queue elements are:\n");
    int i = front;
    while (i != rear) {
        printf("%d\n", queue[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n", queue[rear]);  // Display the rear element
}

int main() {
    int choice, element;

    printf("Circular Queue Operations Menu:\n");
    printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Enqueue operation
                printf("Enter the element to enqueue: ");
                scanf("%d", &element);
                enqueue(element);
                break;
            case 2: // Dequeue operation
                dequeue();
                break;
            case 3: // Display the queue
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
