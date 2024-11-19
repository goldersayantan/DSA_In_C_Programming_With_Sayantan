#include <stdio.h>

int max;
int front = -1;
int rear = -1;

void queue_insertion(int queue[], int element)  {
    if(((front == 0) && (rear == max - 1)) || (front == rear + 1))    {
        printf("The Queue is overflowing. Can't insert more element.\n");
    }else if((front == -1) && (rear == -1))   {
        front = 0;
        rear = 0;
        queue[rear] = element;
        printf("%d inserted in the queue.\n", element);
    }else if((front != 0) && (rear == max - 1))  {
        rear = 0;
        queue[rear] = element;
        printf("%d inserted in the queue.\n", element);
    }else   {
        rear++;
        queue[rear] = element;
        printf("%d inserted in the queue.\n", element);
    }
}

void queue_deletion(int queue[])    {
    if((front == -1) && (rear == -1))   {
        printf("The queue is underflowing. There is no element to delete.\n");
    }else if(front == rear)  {
        int del_val = queue[front];
        front = -1;
        rear = -1;
        printf("%d deleted from the queue.\n", del_val);
    }else if(front == max - 1)  {
        int del_val = queue[front];
        printf("%d deleted from the queue.\n", del_val);
        front = 0;
    }else   {
        int del_val = queue[front];
        front++;
        printf("%d deleted from the queue.\n", del_val);
    }
}

void display_queue(int queue[]) {
    if((front == -1) && (rear == -1))   {
        printf("The queue is underflowing. There is no element to show.");
    }else if(front <= rear)  {
        printf("The queue will be: ");
        for(int i = front; i <= rear; i++)  {
            printf("%d", queue[i]);
        }
    }else   {
        printf("The queue will be: ");
        for(int j = front; j < max; j++)    {
            printf("%d", queue[j]);
        }
        for(int k = rear; k < front; k++)   {
            printf("%d", queue[k]);
        }
    }
}

void peek_element(int queue[])  {
    if((front == -1) && (rear == -1))   {
        printf("The queue is underflowing. There is no element to show.");
    }else   {
        printf("The peek element will be: %d", queue[front]);
    }
}

int main()  {
    printf("Enter the maximum number of element, you want to keep in the queue: ");
    scanf("%d", &max);
    int queue[max];
    
    while(1)    {
        printf("*****MAIN MENU******\n\n");
        printf("1. Insert Element Into The Queue.\n");
        printf("2. Delete Element From The Queue.\n");
        printf("3. Display The Queue.\n");
        printf("4. Peek Element Of The Queue.\n");
        printf("5. Exit\n\n");
        int choice;
        printf("Enter your choice, what you want to do: ");
        scanf("%d", &choice);
        switch(choice)  {
            case 1: {
                int element;
                printf("Enter the element, you want to insert into the queue: ");
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
                printf("Exitting.....");
                return 0;
                break;

            case 6:
                printf("Invalid Input. Try Again");
                break;
        }
    }
    return 0;
}