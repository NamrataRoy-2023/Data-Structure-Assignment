///Write a Menu driven C program to accomplish the following functionalities in circular doubly linked list.
///a) Create a circular doubly linked list.
///b) Display the elements of a circular doubly linked list.
///c) Insert a node at the beginning of a circular doubly linked list.
///d) Insert a node at the end of a circular doubly linked list.
///e) Delete a node from the beginning of a circular doubly linked list.
///f) Delete a node from the end of a circular doubly linked list.
///g) Delete a node after a given node of a circular doubly linked list.
///h) Delete the entire circular doubly linked list.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

struct node *createNode(int data) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = newNode->prev = newNode;
    return newNode;
}

// Function to display the circular doubly linked list
void display() {
    if (head == NULL) {
        printf("Circular Doubly Linked List is empty.\n");
        return;
    }

    struct node *current = head;
    do {
        printf("%d <-> ", current->data);
        current = current->next;
    } while (current != head);
    printf("(head)\n");
}

// Function to insert a node at the beginning of the circular doubly linked list
void insertAtBegin(int data) {
    struct node *newNode = createNode(data);

    if (head == NULL) {
        head = newNode;
    } else {
        newNode->next = head;
        newNode->prev = head->prev;
        head->prev->next = newNode;
        head->prev = newNode;
        head = newNode;
    }

    printf("Node inserted at the beginning.\n");
}

// Function to insert a node at the end of the circular doubly linked list
void insertAtEnd(int data) {
    struct node *newNode = createNode(data);

    if (head == NULL) {
        head = newNode;
    } else {
        newNode->next = head;
        newNode->prev = head->prev;
        head->prev->next = newNode;
        head->prev = newNode;
    }

    printf("Node inserted at the end.\n");
}

// Function to delete a node from the beginning of the circular doubly linked list
void deleteAtBegin() {
    if (head == NULL) {
        printf("Circular Doubly Linked List is empty. Cannot delete.\n");
        return;
    }

    struct node *temp = head;

    if (head->next == head) {
        free(head);
        head = NULL;
    } else {
        head = head->next;
        head->prev = temp->prev;
        temp->prev->next = head;
        free(temp);
    }

    printf("Node deleted from the beginning.\n");
}

// Function to delete a node from the end of the circular doubly linked list
void deleteAtEnd() {
    if (head == NULL) {
        printf("Circular Doubly Linked List is empty. Cannot delete.\n");
        return;
    }

    struct node *temp = head;

    if (head->next == head) {
        free(head);
        head = NULL;
    } else {
        head->prev->next = head->next;
        head->next->prev = head->prev;
        head = head->prev;
        free(temp);
    }

    printf("Node deleted from the end.\n");
}

// Function to delete a node after a given node in the circular doubly linked list
void deleteAfterNode(int key) {
    if (head == NULL) {
        printf("Circular Doubly Linked List is empty. Cannot delete.\n");
        return;
    }

    struct node *temp = head;
    while (temp->data != key && temp->next != head) {
        temp = temp->next;
    }

    if (temp->data != key) {
        printf("Node with key %d not found.\n", key);
        return;
    }

    struct node *nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    nodeToDelete->next->prev = temp;
    free(nodeToDelete);

    printf("Node deleted after the node with key %d.\n", key);
}

// Function to delete the entire circular doubly linked list
void deleteList() {
    struct node *current = head;
    struct node *next;

    if (head != NULL) {
        do {
            next = current->next;
            free(current);
            current = next;
        } while (current != head);
    }

    head = NULL;
    printf("Entire Circular Doubly Linked List deleted.\n");
}

int main() {
    int choice, value, key;

    do {
        printf("\nMenu:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Delete from the beginning\n");
        printf("4. Delete from the end\n");
        printf("5. Delete after a given node\n");
        printf("6. Display\n");
        printf("7. Delete the entire list\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value for new node: ");
                scanf("%d", &value);
                insertAtBegin(value);
                break;

            case 2:
                printf("Enter value for new node: ");
                scanf("%d", &value);
                insertAtEnd(value);
                break;

            case 3:
                deleteAtBegin();
                break;

            case 4:
                deleteAtEnd();
                break;

            case 5:
                printf("Enter the key after which you want to delete: ");
                scanf("%d", &key);
                deleteAfterNode(key);
                break;

            case 6:
                display();
                break;

            case 7:
                deleteList();
                break;

            case 8:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 8);

    return 0;
}
