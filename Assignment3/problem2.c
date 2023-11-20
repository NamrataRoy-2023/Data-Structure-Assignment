///2) Write a Menu driven C program to accomplish the following functionalities in circular linked list.
///a) Create a circular linked list.
///b) Display the elements of a circular linked list.
///c) Insert a node at the beginning of a circular linked list.
///d) Insert a node at the end of a circular linked list.
///e) Delete a node from the beginning of a circular linked list.
///f) Delete a node from the end of a circular linked list.
///g) Delete a node after a given node of a circular linked list.
///h) Delete the entire circular linked list.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createCircularLinkedList();
void displayCircularList(struct Node* head);
struct Node* insertAtBeginning(struct Node* head, int value);
struct Node* insertAtEnd(struct Node* head, int value);
struct Node* deleteFromBeginning(struct Node* head);
struct Node* deleteFromEnd(struct Node* head);
struct Node* deleteAfterNode(struct Node* head, int key);
void deleteEntireList(struct Node** head);

int main() {
    struct Node* head = NULL;
    int choice, value, key;

    do {
        printf("\n---- Circular Linked List Operations ----\n");
        printf("1. Create a circular linked list\n");
        printf("2. Display elements\n");
        printf("3. Insert at the beginning\n");
        printf("4. Insert at the end\n");
        printf("5. Delete from the beginning\n");
        printf("6. Delete from the end\n");
        printf("7. Delete after a given node\n");
        printf("8. Delete entire list\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: head = createCircularLinkedList(); break;
            case 2: displayCircularList(head); break;
            case 3: printf("Enter value: "); scanf("%d", &value); head = insertAtBeginning(head, value); break;
            case 4: printf("Enter value: "); scanf("%d", &value); head = insertAtEnd(head, value); break;
            case 5: head = deleteFromBeginning(head); break;
            case 6: head = deleteFromEnd(head); break;
            case 7: printf("Enter key: "); scanf("%d", &key); head = deleteAfterNode(head, key); break;
            case 8: deleteEntireList(&head); break;
            case 0: printf("Exiting. Goodbye!\n"); break;
            default: printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}

struct Node* createCircularLinkedList() {
    struct Node* head = NULL, * temp = NULL;
    int n, value;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);

        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = head;

        if (!head) head = newNode;
        else temp->next = newNode;

        temp = newNode;
    }

    printf("Circular linked list created successfully.\n");
    return head;
}

void displayCircularList(struct Node* head) {
    if (!head) printf("The list is empty.\n");
    else {
        struct Node* current = head;
        do {
            printf("%d ", current->data);
            current = current->next;
        } while (current != head);
        printf("\n");
    }
}

struct Node* insertAtBeginning(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (!head) newNode->next = newNode;
    else {
        struct Node* temp = head;
        while (temp->next != head) temp = temp->next;
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }

    printf("Node inserted at the beginning successfully.\n");
    return head;
}

struct Node* insertAtEnd(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (!head) newNode->next = newNode;
    else {
        struct Node* temp = head;
        while (temp->next != head) temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }

    printf("Node inserted at the end successfully.\n");
    return head;
}

struct Node* deleteFromBeginning(struct Node* head) {
    if (!head) printf("The list is already empty.\n");
    else {
        struct Node* temp = head;
        while (temp->next != head) temp = temp->next;

        if (head->next == head) {
            free(head);
            head = NULL;
        } else {
            temp->next = head->next;
            free(head);
            head = temp->next;
        }

        printf("Node deleted from the beginning successfully.\n");
    }

    return head;
}

struct Node* deleteFromEnd(struct Node* head) {
    if (!head) printf("The list is already empty.\n");
    else {
        struct Node* temp = head, * prev = NULL;
        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }

        if (head->next == head) {
            free(head);
            head = NULL;
        } else {
            prev->next = head;
            free(temp);
        }

        printf("Node deleted from the end successfully.\n");
    }

    return head;
}

struct Node* deleteAfterNode(struct Node* head, int key) {
    if (!head) printf("The list is empty.\n");
    else {
        struct Node* temp = head, * prev = NULL;
        do {
            prev = temp;
            temp = temp->next;
        } while (temp != head && temp->data != key);

        if (temp == head) printf("Node with key %d not found.\n", key);
        else {
            prev->next = temp->next;
            free(temp);
            printf("Node deleted after key %d successfully.\n", key);
        }
    }

    return head;
}

void deleteEntireList(struct Node** head) {
    struct Node* current = *head, * next;

    while (current && current->next != *head) {
        next = current->next;
        free(current);
        current = next;
    }

    free(current);
    *head = NULL;
    printf("Entire list deleted successfully.\n");
}