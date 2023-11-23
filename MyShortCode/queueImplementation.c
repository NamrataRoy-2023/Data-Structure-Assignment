///QUEUE IMPLEMENTATION OF LINKED LIST
#include<stdio.h>
#include <stdlib.h>

///DEFINE STRUCTURE
struct node {
	int data;
	struct node *link;
};
struct node *front = NULL;
struct node * rear = NULL;

///CREATE NODE
struct node *createNode(int value){
	struct node * newNode = (struct node *)malloc(sizeof(struct node));
	newNode -> data = value;
	newNode -> link = NULL;
	return newNode;
}

///ENQUEUE
void enqueue(){
	int dta;
	printf("\nEnter the value you want to insert : ");
	scanf("%d",&dta);
	struct node * newNode = createNode(dta);
	if(rear == NULL){
		front = rear = newNode;
	}
	else{
		rear -> link = newNode;
		rear = newNode;
	}
	printf("\nelement %d enqueued Successfully.",dta);
}

///DEQUEUE
void dequeue(){
	struct node * temp = front;
	int n = front ->data;
	if(front == NULL){
		printf("\nqueue is already empty");
		return;
	}
	else{
		front = temp->link;
		free(temp);
	}
	printf("\nelement %d dequeued Successfully.",n);
}

///DISPLAY
void display(){
	struct node * temp = front;
	if(front == NULL){
		printf("\nqueue is empty");
	}
	else{
		printf("\nFRONT ->");
		while(temp != NULL){
			printf("%d -> ",temp->data);
			temp = temp->link;
		}
		printf("REAR");
	}
}

///MAIN FUNCTION
int main(){
	enqueue();
	enqueue();
	enqueue();
	display();
	dequeue();
	display();
}
