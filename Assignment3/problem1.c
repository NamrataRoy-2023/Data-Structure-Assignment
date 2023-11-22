///1) Write a Menu driven C program to accomplish the following functionalities in single linked list.
///a) Create a single linked list.
///b) Display the elements of a single linked list.
///c) Insert a node at the beginning of a single linked list.
///d) Insert a node at the end of a single linked list.
///e) Insert a node before a given node of a single linked list.
///f) Insert a node after a given node of a single linked list.
///g) Delete a node from the beginning of a single linked list.
///h) Delete a node from the end of a single linked list.
///i) Delete a node after a given node of a single linked list.
///j) Delete the entire single linked list.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void displayList(struct Node* head) {
    struct Node* current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

struct Node* insertBeforeNode(struct Node* head, int data, int targetData) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    if (head->data == targetData) {
        newNode->next = head;
        return newNode;
    }
    struct Node* current = head;
    while (current->next != NULL && current->next->data != targetData) {
        current = current->next;
    }
    if (current->next == NULL) {
        printf("Node with data %d not found.\n", targetData);
        free(newNode);
        return head;
    }
    newNode->next = current->next;
    current->next = newNode;
    return head;
}

struct Node* insertAfterNode(struct Node* head, int data, int targetData) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    struct Node* current = head;
    while (current != NULL && current->data != targetData) {
        current = current->next;
    }
    if (current == NULL) {
        printf("Node with data %d not found.\n", targetData);
        free(newNode);
        return head;
    }
    newNode->next = current->next;
    current->next = newNode;
    return head;
}

struct Node* deleteFromBeginning(struct Node* head) {
    if (head == NULL) {
        printf("Linked list is empty, cannot delete.\n");
        return NULL;
    }
    struct Node* newHead = head->next;
    free(head);
    return newHead;
}

struct Node* deleteFromEnd(struct Node* head) {
    if (head == NULL) {
        printf("Linked list is empty, cannot delete.\n");
        return NULL;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    struct Node* current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
    return head;
}

struct Node* deleteAfterNode(struct Node* head, int targetData) {
    if (head == NULL || head->next == NULL) {
        printf("Linked list has insufficient nodes, cannot delete.\n");
        return head;
    }
    struct Node* current = head;
    while (current != NULL && current->data != targetData) {
        current = current->next;
    }
    if (current == NULL || current->next == NULL) {
        printf("Node with data %d not found or there is no node after it.\n", targetData);
        return head;
    }
    struct Node* nodeToDelete = current->next;
    current->next = current->next->next;
    free(nodeToDelete);
    return head;
}

void deleteLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* nextNode = current->next;
        free(current);
        current = nextNode;
    }
}

int main() {
    struct Node* head = NULL;
    int choice, data, targetData;

    do {
        printf("\nMenu:\n");
        printf("1. Create a single linked list\n");
        printf("2. Display the elements of the linked list\n");
        printf("3. Insert a node at the beginning\n");
        printf("4. Insert a node at the end\n");
        printf("5. Insert a node before a given node\n");
        printf("6. Insert a node after a given node\n");
        printf("7. Delete a node from the beginning\n");
        printf("8. Delete a node from the end\n");
        printf("9. Delete a node after a given node\n");
        printf("10. Delete the entire linked list\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data for the first node: ");
                scanf("%d", &data);
                head = createNode(data);
                break;

            case 2:
                displayList(head);
                break;

            case 3:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                head = insertAtBeginning(head, data);
                break;

            case 4:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                head = insertAtEnd(head, data);
                break;

            case 5:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                printf("Enter the target node data: ");
                scanf("%d", &targetData);
                head = insertBeforeNode(head, data, targetData);
                break;

            case 6:
                printf("Enter data for the new node: ");
                scanf("%d", &data);
                printf("Enter the target node data: ");
                scanf("%d", &targetData);
                head = insertAfterNode(head, data, targetData);
                break;

            case 7:
                head = deleteFromBeginning(head);
                break;

            case 8:
                head = deleteFromEnd(head);
                break;

            case 9:
                printf("Enter the target node data: ");
                scanf("%d", &targetData);
                head = deleteAfterNode(head, targetData);
                break;

            case 10:
                deleteLinkedList(head);
                head = NULL;
                break;

            case 0:
                deleteLinkedList(head);
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

        if (choice != 2 && choice != 0) {
            displayList(head);
        }
    } while (choice != 0);

    return 0;
}