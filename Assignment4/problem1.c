///1) Write a Menu driven C program to accomplish the following functionalities in doubly linked list.
///a) Create a doubly linked list.///
///b) Display the elements of a doubly linked list.///
///c) Insert a node at the beginning of a doubly linked list.///
///d) Insert a node at the end of a doubly linked list.///
///e) Insert a node before a given node of a doubly linked list.///
///f) Insert a node after a given node of a doubly linked list.///
///g) Delete a node from the beginning of a doubly linked list.///
///h) Delete a node from the end of a doubly linked list.///
///i) Delete a node after a given node of a doubly linked list.///
///j) Delete the entire doubly linked list.


#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *head = NULL;

struct node * createNode(int data) {
	struct node * newNode = (struct node*)malloc(sizeof(struct node));
	newNode -> data = data;
	newNode -> next = NULL;
	newNode -> prev = NULL;
	return newNode;
}
///INSERT AT BEGIN
void insertAtBegin(int data){
	struct node * newNode = createNode(data);
	newNode -> next = head;
	newNode -> prev = NULL;
	head = newNode;
}
///INSERT AT END
void insertAtEnd(int data){
	struct node * newNode = createNode(data);
	if(head == NULL){
		head = newNode;
	}
	else{
		struct node * current = head;
		while(current -> next != NULL){
			current = current -> next;
		}
		current -> next = newNode;
		newNode -> prev =  current;
	}
}
///INSERT BEFORE A GIVEN NODE
void insertBeforeNode(int data){
	struct node * newNode = createNode(data);
	struct node * temp;
	int i,loc;
	if(newNode == NULL){
		printf("Linked List is Full.");
	}
	else{
		printf("Enter The Node Number Before which you want to Insert the new node : ");
		scanf("%d", &loc);
		temp = head;
		for(i=1; i<loc; i++){
			temp = temp -> next;
			if(temp == NULL){
				printf("Entered node doesn't exist.Enter a Valid input.");
				return;
			}
		}
		newNode -> prev = temp -> prev;
		newNode -> next = temp;
		newNode -> prev -> next = newNode;
		temp -> prev = newNode;
	}
	
}



///INSERT AFTER A GIVEN NODE
void insertAfterNode(int data){
	struct node * newNode = createNode(data);
	struct node * temp;
	int i,loc;
	if(newNode == NULL){
		printf("Linked List is Full.");
	}
	else{
		printf("Enter The Node Number After which you want to Insert the new node : ");
		scanf("%d", &loc);
		temp = head;
		for(i=1; i<loc; i++){
			temp = temp -> next;
			if(temp == NULL){
				printf("Entered node doesn't exist.Enter a Valid input.");
				return;
			}
		}
		newNode -> next = temp -> next;
		newNode -> prev = temp;
		newNode -> next -> prev = newNode;
		temp -> next = newNode;
	}
	
}


///DELETE AT BEGIN
void deleteAtBegin(){
	if(head == NULL){
		printf("Linked List is Empty.");
	}
	else{
		struct node * temp = head;
		head = head -> next;
		free(temp);
	}
}
///DELETE AT END 
void deleteAtEnd(){
	if(head == NULL){
		printf("Linked List is Empty.");
	}
	else if(head -> next == NULL) {
		free(head);
		head = NULL;
		printf("Deletion Successful!\n");
	}
	else{
		struct node * current = head;
		while(current -> next -> next != NULL){
			current = current -> next;
		}
		struct node *temp = current -> next;
		current -> next = NULL;
		free(temp);
	}
}
///DELETE A NODE AFTER A GIVEN NODE
void deleteAfterNode() {
    int loc,i;
    struct node *temp;
    if (head == NULL) {
        printf("Linked List is Empty.");
    } else {
        printf("Enter The Node Number After which you want to delete the node : ");
        scanf("%d", &loc);
        temp = head;
        for ( i = 1; i < loc; i++) {
            if (temp == NULL) {
                printf("Entered node doesn't exist. Enter a Valid input.");
                return;
            }
            temp = temp->next;
        }

        if (temp != NULL && temp->next != NULL) {
            struct node *nodeToDelete = temp->next;
            temp->next = temp->next->next;
            if (temp->next != NULL) {
                temp->next->prev = temp;
            }
            free(nodeToDelete);
        } else {
            printf("No node to delete after.\n");
        }
    }
}


///DELETE THE LIST
void deleteList() {
    struct node *current = head;
    struct node *next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    head = NULL;
}

///DISPLAY
void display(){
	struct node *current = head;
	if (head == NULL){
		printf("The Linked List Is Empty\n");
		return;
	}
	else{
		printf("NULL <-> ");
		while(current != NULL){
			printf("%d <-> " , current->data);
			current = current -> next;
		}
	printf("NULL\n");
	}
}



int main() {
    int choice, value;

    do {
        printf("\nMenu:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert before a node\n");
        printf("4. Insert after a node\n");
        printf("5. Delete at the beginning\n");
        printf("6. Delete at the end\n");
        printf("7. Delete after a node\n");
        printf("8. Display\n");
        printf("9. Delete the entire list\n");
        printf("10. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value for new Node: ");
                scanf("%d", &value);
                insertAtBegin(value);
                break;

            case 2:
                printf("Enter value for new Node: ");
                scanf("%d", &value);
                insertAtEnd(value);
                break;

            case 3:
                printf("Enter value for new Node: ");
                scanf("%d", &value);
                insertBeforeNode(value);
                break;

            case 4:
                printf("Enter value for new Node: ");
                scanf("%d", &value);
                insertAfterNode(value);
                break;

            case 5:
                deleteAtBegin();
                break;

            case 6:
                deleteAtEnd();
                break;

            case 7:
                deleteAfterNode();
                break;

            case 8:
                display();
                break;

            case 9:
                deleteList();
                printf("Entire list deleted.\n");
                break;

            case 10:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 10);

    return 0;
}
