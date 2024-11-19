#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *head = NULL;


void insert_at_beginning(int data)  {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode -> data = data;
    newNode -> link = head;

    head = newNode;
}

void delete_at_beginning()  {
    if(head == NULL)    {
        printf("The list is empty.");
    }else   {
        struct node *temp = head;
        head = head -> link;
        free(temp);
        printf("Element at the beginning deleted.");
    }
}

void delete_at_specific_position(int position)  {
    if(head == NULL)    {
        printf("The list is empty.");
    }else if(position == 1)   {
        delete_at_beginning();
    }else   {
        struct node *previous = head;
        struct node *current = head;
        while(position != -1)   {
            previous = current;
            current = current -> link;
            position--;
        }
        previous -> link = current -> link;
        free(current);
        current = NULL;
    }
}

void delete_at_end()    {
    if(head == NULL)    {
        printf("The list is empty.");
    }else if(head -> link == NULL)   {
        free(head);
        head = NULL;
        printf("Element at the end deleted.");
    }else   {
        struct node *temp1 = head;
        struct node *temp2 = head;

        while(temp1 -> link != NULL)    {
            temp2 = temp1;
            temp1 = temp1 -> link;
        }
        temp2 -> link = NULL;
        free(temp1);
        temp1 = NULL;
    }
}
