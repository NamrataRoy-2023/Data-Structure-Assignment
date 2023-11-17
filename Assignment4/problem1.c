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
		for(i=0; i<loc; i++){
			temp = temp -> next;
			if(temp == NULL){
				printf("Entered node doesn't exist.Enter a Valid input.");
				return;
			}
		}
		newNode -> next = temp;
		newNode -> prev = temp -> prev;
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
		for(i=0; i<loc; i++){
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
void deleteAfterNode(int key){
	int i,loc;
	struct node * ptr1,*ptr2;
	ptr1 = head;
	if(head == NULL){
		printf("Linked List is Empty.");
	}
	else{
		while(ptr1 -> next != NULL){
			if(ptr1 -> data == key){
				ptr2 = ptr1 -> next;
				ptr1 -> next = ptr2 -> next;
				free(ptr2);
				break;
			}
			ptr1 = ptr1 -> next;
		}
	}
}


///DISPLAY
void display(){
	struct node *current = head;
	if (head == NULL){
		printf("The Linked List Is Empty\n");
		return;
	}
	else{
		printf("START <-> ");
		while(current != NULL){
			printf("%d <-> " , current->data);
			current = current -> next;
		}
	printf("NULL\n");
	}
}



int main(){
	int i,n,value;
	printf("Enter number of Nodes : ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("Enter value for Node Number %d : ", i+1);
		scanf("%d", &value);
		insertAtEnd(value);	
	}
	display();
	
	printf("\n");
	
	printf("Enter value for new Node : ");
	scanf("%d", &value);
	insertBeforeNode(value);
	printf("New list after insertion before a node : ");
	display();
		
	printf("\n");
	
	printf("Enter value for new Node : ");
	scanf("%d", &value);
	insertAfterNode(value);
	printf("New list after insertion After a node : ");
	display();
	
	printf("\n");
	
	deleteAtBegin();
	printf("New list after deletion of first element : ");
	display();
		
	printf("\n");
	
	deleteAtEnd();
	printf("New list after deletion of last element : ");
	display();
	
    printf("\n");
	
	printf("enter node you want to delete : ");
	scanf("%d", &value);
	deleteAfterNode(value);
	printf("New list after deletion of node after a node: ");
	display();
}
