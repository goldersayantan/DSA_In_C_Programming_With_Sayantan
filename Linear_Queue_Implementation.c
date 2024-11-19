#include <stdio.h>

int max;
int front = -1;
int rear = -1;

void queue_insertion(int queue[], int element)  {
    if(rear == (max - 1))   {
        printf("The queue is overflowing. Can't add more element.\n\n");
    }else if((front == -1) || (rear == -1)) {
        front = 0;
        rear = 0;
        queue[rear] = element;
        printf("%d inserted into the queue.\n\n", element);
    }else   {
        rear++;
        queue[rear] = element;
        printf("%d inserted into the queue.\n\n", element);
    }
}

void queue_deletion(int queue[])    {
    if((front == -1) || (rear == -1))   {
        printf("The queue is underflowing. Can't delete any element.\n\n");
    }else if(front == rear)  {
        int del_val = queue[front];
        front = -1;
        rear = -1;
        printf("%d deleted from the queue.\n\n", del_val);
    }else   {
        int del_val = queue[front];
        front++;
        printf("%d deleted from the queue.\n\n", del_val);
    }
}

void display_queue(int queue[])  {
    if((front == -1) || (rear == -1))   {
        printf("The queue is underflowing. There is no element to show.\n\n");
    }else   {
        printf("The queue will be: ");
        for(int i = front; i <= rear; i++)  {
            printf("%d", queue[i]);
        }
        printf("\n\n");
    }
}

void peek_element(int queue[])  {
    if((front == -1) || (rear == -1))   {
        printf("The queue is underflowing. There is no element to show.\n\n");
    }else   {
        printf("The peek element will be: %d\n\n", queue[front]);
    }
}

int main()  {
    printf("Enter the maximum number of element, you want to keep in the queue: ");
    scanf("%d", &max);
    int queue[max];
    while(1)    {
        printf("\n*****MAIN MENU*****\n\n");
        printf("1. Insert Element Into Queue\n");
        printf("2. Delete Element Into Queue\n");
        printf("3. Display queue\n");
        printf("4. Peek Element Of The Queue\n");
        printf("5. Exit From The Queue\n");
        int choice;
        printf("Enter your choice, what you want to do: ");
        scanf("%d", &choice);
        switch(choice)  {
            case 1: {
                int element;
                printf("Enter the element, which you want to insert: ");
                scanf("%d", &element);
                queue_insertion(queue, element);
                break;
            }

            case 2:
                queue_deletion(queue);
                break;

            case 3:
                display_queue(queue);
                break;

            case 4:
                peek_element(queue);
                break;

            case 5:
                printf("Exitting.....\n\n");
                return 0;
                break;

            default:
                printf("Invalid Input.\n\n");
                break;        
        }
    }
    return 0;
}