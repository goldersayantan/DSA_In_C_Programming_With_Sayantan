// #include <stdio.h>
// #include <stdlib.h>

// // Define structure for a node
// struct Node {
//     int data;
//     struct Node* link;
// };

// // Initialize head pointer
// struct Node* head = NULL;

// // Function to insert a node at the beginning
// void insertAtBeginning(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->link = head;
//     head = newNode;
//     printf("Inserted %d at the beginning.\n", data);
// }

// // Function to insert a node at the end
// void insertAtEnd(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->link = NULL;
    
//     if (head == NULL) {
//         head = newNode;
//     } else {
//         struct Node* temp = head;
//         while (temp->link != NULL) {
//             temp = temp->link;
//         }
//         temp->link = newNode;
//     }
//     printf("Inserted %d at the end.\n", data);
// }

// // Function to insert after a specific position
// void insertAfterPosition(int data, int position) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;

//     struct Node* temp = head;
//     for (int i = 1; i < position && temp != NULL; i++) {
//         temp = temp->link;
//     }

//     if (temp == NULL) {
//         printf("Position out of range.\n");
//     } else {
//         newNode->link = temp->link;
//         temp->link = newNode;
//         printf("Inserted %d after position %d.\n", data, position);
//     }
// }

// // Function to display the linked list
// void displayList() {
//     struct Node* temp = head;
//     printf("Linked List: ");
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->link;
//     }
//     printf("NULL\n");
// }

// // Main function
// int main() {
//     int choice, data, position;
    
//     while (1) {
//         printf("\nMenu:\n");
//         printf("1. Insert at Beginning\n");
//         printf("2. Insert at End\n");
//         printf("3. Insert After Position\n");
//         printf("4. Display List\n");
//         printf("5. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter data: ");
//                 scanf("%d", &data);
//                 insertAtBeginning(data);
//                 break;
//             case 2:
//                 printf("Enter data: ");
//                 scanf("%d", &data);
//                 insertAtEnd(data);
//                 break;
//             case 3:
//                 printf("Enter data: ");
//                 scanf("%d", &data);
//                 printf("Enter position: ");
//                 scanf("%d", &position);
//                 insertAfterPosition(data, position);
//                 break;
//             case 4:
//                 displayList();
//                 break;
//             case 5:
//                 printf("Exiting program.\n");
//                 exit(0);
//             default:
//                 printf("Invalid choice. Please try again.\n");
//         }
//     }
//     return 0;
// }






#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *head = NULL;

void insert_at_beginning(int data)  {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    newNode -> data = data;
    newNode -> link = head;

    head = newNode;

    printf("%d inserted at the beginning.", data);
}

void insert_at_specific_position(int position, int data)    {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode -> data = data;
    newNode -> link = NULL;

    struct node *temp = head;
    for(int i = 1; i < position; i++)   {
        temp = temp -> link;
    }

    if(temp == NULL)    {
        printf("Position out of range.\n");
    }else   {
        newNode -> link = temp -> link;
        temp->link = newNode;
    }
}

void insert_at_end(int data)    {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode -> data = data;
    newNode -> link = NULL;

    if(head == NULL) {
        head = newNode;
    }else   {
        struct node *temp = head;
        while(temp -> link != NULL) {
            temp = temp -> link; 
        }
        temp -> link = newNode;
    }

}

