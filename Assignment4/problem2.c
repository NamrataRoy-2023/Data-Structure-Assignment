#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = newData;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to display the doubly linked list
void displayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to insert a node at the beginning of the doubly linked list
struct Node* insertAtBeginning(struct Node* head, int newData) {
    struct Node* newNode = createNode(newData);

    if (head == NULL) {
        return newNode;
    }

    newNode->next = head;
    head->prev = newNode;
    return newNode;
}

// Function to insert a node at the end of the doubly linked list
struct Node* insertAtEnd(struct Node* head, int newData) {
    struct Node* newNode = createNode(newData);

    if (head == NULL) {
        return newNode;
    }

    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
    newNode->prev = current;
    return head;
}

// Function to insert a node before a given node in the doubly linked list
struct Node* insertBefore(struct Node* head, struct Node* targetNode, int newData) {
    if (targetNode == NULL) {
        printf("Target node cannot be NULL.\n");
        return head;
    }

    struct Node* newNode = createNode(newData);

    newNode->prev = targetNode->prev;
    newNode->next = targetNode;

    if (targetNode->prev != NULL) {
        targetNode->prev->next = newNode;
    }

    targetNode->prev = newNode;

    if (head == targetNode) {
        return newNode;
    }

    return head;
}

// Function to insert a node after a given node in the doubly linked list
struct Node* insertAfter(struct Node* head, struct Node* prevNode, int newData) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL.\n");
        return head;
    }

    struct Node* newNode = createNode(newData);

    newNode->next = prevNode->next;
    newNode->prev = prevNode;

    if (prevNode->next != NULL) {
        prevNode->next->prev = newNode;
    }

    prevNode->next = newNode;

    return head;
}

// Function to delete a node from the beginning of the doubly linked list
struct Node* deleteFromBeginning(struct Node* head) {
    if (head == NULL) {
        printf("List is empty. Cannot delete from an empty list.\n");
        return NULL;
    }

    struct Node* newHead = head->next;
    free(head);

    if (newHead != NULL) {
        newHead->prev = NULL;
    }

    return newHead;
}

// Function to delete a node from the end of the doubly linked list
struct Node* deleteFromEnd(struct Node* head) {
    if (head == NULL) {
        printf("List is empty. Cannot delete from an empty list.\n");
        return NULL;
    }

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->prev->next = NULL;
    free(current);

    return head;
}

// Function to delete a node after a given node in the doubly linked list
struct Node* deleteAfter(struct Node* head, struct Node* prevNode) {
    if (prevNode == NULL || prevNode->next == NULL) {
        printf("Invalid operation. Node or its next node is NULL.\n");
        return head;
    }

    struct Node* nodeToDelete = prevNode->next;
    prevNode->next = nodeToDelete->next;

    if (nodeToDelete->next != NULL) {
        nodeToDelete->next->prev = prevNode;
    }

    free(nodeToDelete);

    return head;
}

// Function to delete the entire doubly linked list
void deleteList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* nextNode = current->next;
        free(current);
        current = nextNode;
    }
}

int main() {
    struct Node* head = NULL;

    int choice, data;
    struct Node* targetNode;

    do {
        printf("\nMenu:\n");
        printf("1. Create a doubly linked list\n");
        printf("2. Display the elements of the doubly linked list\n");
        printf("3. Insert a node at the beginning\n");
        printf("4. Insert a node at the end\n");
        printf("5. Insert a node before a given node\n");
        printf("6. Insert a node after a given node\n");
        printf("7. Delete a node from the beginning\n");
        printf("8. Delete a node from the end\n");
        printf("9. Delete a node after a given node\n");
        printf("10. Delete the entire doubly linked list\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Create a doubly linked list
                printf("Enter the data for the first node: ");
                scanf("%d", &data);
                head = createNode(data);
                printf("Doubly linked list created.\n");
                break;

            case 2:
                // Display the elements of the doubly linked list
                displayList(head);
                break;

            case 3:
                // Insert a node at the beginning
                printf("Enter the data for the new node: ");
                scanf("%d", &data);
                head = insertAtBeginning(head, data);
                printf("Node inserted at the beginning.\n");
                break;

            case 4:
                // Insert a node at the end
                printf("Enter the data for the new node: ");
                scanf("%d", &data);
                head = insertAtEnd(head, data);
                printf("Node inserted at the end.\n");
                break;

            case 5:
                // Insert a node before a given node
                printf("Enter the data for the new node: ");
                scanf("%d", &data);
                printf("Enter the data of the target node: ");
                scanf("%d", &data);
                targetNode = head;
                while (targetNode != NULL && targetNode->data != data) {
                    targetNode = targetNode->next;
                }
                head = insertBefore(head, targetNode, data);
                printf("Node inserted before the given node.\n");
                break;

            case 6:
                // Insert a node after a given node
                printf("Enter the data for the new node: ");
                scanf("%d", &data);
                printf("Enter the data of the target node: ");
                scanf("%d", &data);
                targetNode = head;
                while (targetNode != NULL && targetNode->data != data) {
                    targetNode = targetNode->next;
                }
                head = insertAfter(head, targetNode, data);
                printf("Node inserted after the given node.\n");
                break;

            case 7:
                // Delete a node from the beginning
                head = deleteFromBeginning(head);
                printf("Node deleted from the beginning.\n");
                break;

            case 8:
                // Delete a node from the end
                head = deleteFromEnd(head);
                printf("Node deleted from the end.\n");
                break;

            case 9:
                // Delete a node after a given node
                printf("Enter the data of the target node: ");
                scanf("%d", &data);
                targetNode = head;
                while (targetNode != NULL && targetNode->data != data) {
                    targetNode = targetNode->next;
                }
                head = deleteAfter(head, targetNode);
                printf("Node deleted after the given node.\n");
                break;

            case 10:
                // Delete the entire doubly linked list
                deleteList(head);
                printf("Doubly linked list deleted.\n");
                head = NULL;
                break;

            case 0:
                // Exit the program
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 0);

    return 0;
}
