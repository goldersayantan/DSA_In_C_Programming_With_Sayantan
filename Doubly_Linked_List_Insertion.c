#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

int main()  {
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head -> prev = NULL;
    head -> data = 100;
    head -> next = NULL;
}



