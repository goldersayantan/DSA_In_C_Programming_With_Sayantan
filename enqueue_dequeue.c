#include <stdio.h>
#define MAX 5  // Maximum size of the queue

int queue[MAX];
int front = -1, rear = -1;  // Initialize front and rear to indicate an empty queue

// Function to check if the queue is full
int isFull() {
    return rear == MAX - 1;
}

// Function to check if the queue is empty
int isEmpty() {
    return front == -1 || front > rear;
}

// Function to enqueue (add an element to the queue)
void enqueue(int element) {
    if (isFull()) {
        printf("Queue Overflow! Cannot enqueue %d.\n", element);
        return;
    }
    if (front == -1) {
        front = 0;  // If queue is empty, set front to 0
    }
    queue[++rear] = element;
    printf("Enqueued %d to the queue.\n", element);
}

// Function to dequeue (remove an element from the queue)
void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! The queue is empty.\n");
        return;
    }
    printf("Dequeued %d from the queue.\n", queue[front]);
    front++;
}

// Function to display the queue
void display() {
    if (isEmpty()) {
        printf("The queue is empty.\n");
        return;
    }
    printf("Queue elements are:\n");
    for (int i = front; i <= rear; i++) {
        printf("%d\n", queue[i]);
    }
}

int main() {
    int choice, element;

    printf("Queue Operations Menu:\n");
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
