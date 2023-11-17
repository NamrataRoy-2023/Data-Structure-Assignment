///1) Write a Menu driven C program to accomplish the following functionalities in doubly linked list.
///a) Create a doubly linked list.///
///b) Display the elements of a doubly linked list.///
///c) Insert a node at the beginning of a doubly linked list.///
///d) Insert a node at the end of a doubly linked list.///
///e) Insert a node before a given node of a doubly linked list.
///f) Insert a node after a given node of a doubly linked list.
///g) Delete a node from the beginning of a doubly linked list.///
///h) Delete a node from the end of a doubly linked list.///
///i) Delete a node after a given node of a doubly linked list.
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
	deleteAtBegin();
	printf("New list after deletion of first element : ");
	display();
	printf("\n");
	deleteAtEnd();
	printf("New list after deletion of last element : ");
	display();
}
