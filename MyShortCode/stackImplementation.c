///STACK IMPLEMENTATION OF LINKED LIST
#include<stdio.h>
#include<stdlib.h>

///DEFINE STRUCTURE
struct node{
	int data;
	struct node * link;
};
struct node * top = NULL;

///CREATE NODE
struct node * createNode(int value){
	struct node * newNode = (struct node*)malloc(sizeof(struct node));
	newNode -> data = value;
	newNode ->link = NULL;
	return newNode;
}

///PUSH DATA
void push(){
	int dta;
	printf("\nEnter element you want to push : ");
	scanf("%d",&dta);
	struct node * newNode = createNode(dta);
	newNode -> link = top;
	top = newNode;
	printf("\nElement %d pushed successfully.",dta);
}

///POP DATA
void pop(){
	int n;
	if(top == NULL){
		printf("\nstack is empty");
		return;
	}
	else{
		struct node *temp = top;
		n = temp->data;
		top = temp->link;
		free(temp); 
	}
	printf("\nElement %d popped Successfully.",n);
}

///PEEK DATA
void peek(){
	if(top == NULL){
		printf("\nLinked List is empty");
		return;
	}
	printf("\nthe first element of the stack is : %d",top->data);
}

///DISPLAY
void display(){
	struct node * temp = top;
	if(top == NULL){
		printf("\nLinked List is empty");
		return;
	}
	else{
		printf("\nElements are : TOP -> ");
		while(temp != NULL){
			printf("%d -> ",temp->data);
			temp = temp->link;
		}
		printf(" BOTTOM");
	}
}

///MAIN FUNCTION
int main(){
	push();
	push();
	push();
	display();
	pop();
	display();
	peek();
}
