///DOUBLY LINKED LIST
#include<stdio.h>
#include<stdlib.h>

///CREATE NODE
struct node{
    int data;
    struct node *link;
    struct node *prev;
};
struct node *start = NULL;

///ALLOCATE MEMORY TO NODE
struct node *createnode(int val){
    struct node * newNode =(struct node *)malloc(sizeof(struct node));
    newNode ->data = val;
    newNode ->link = NULL;
    newNode ->prev = NULL;
}

///CREATE LINKED LIST
void createList(){
    if(start == NULL){
        int n,i,dta;
        printf("\nEnter number of nodes you want to enter : ");
        scanf("%d" ,&n);
        if(n != 0){
            struct node *temp;
            struct node *newNode = createnode(dta);
            start = newNode;
            temp = start;
            printf("\nEnter value for Node 1 : ");
            scanf("%d",&dta);
            newNode->data = dta;
            for(i=2;i<=n;i++){
            printf("\nEnter value for Node %d : ",i);
            scanf("%d",&dta);
            struct node *newNode = createnode(dta);
            temp->link = newNode;
            newNode->prev =temp;
            temp = temp->link;
            }
        }
        printf("\nLIST CREATED");
    }
    else{
        printf("\nLinked list already exists.");
    }
}

///INSERT AT FIRST
void insertFirst(){
    int dta;
    printf("\nEnter value for new Node : ");
    scanf("%d",&dta);
    struct node * newNode = createnode(dta);
    newNode->link=start;
    start = newNode;
    newNode->prev = start;
    printf("\nNode entered successfully.");
}

///INSERT AFTER A NODE
void insertAfterNode(){
	int n,i,dta; 
	printf("\nEnter node number after which you want to perform insertion : ");
    scanf("%d" ,&n); 
    if(n!=0){
    	printf("\nEnter value for new Node : ");
    	scanf("%d",&dta);
    	struct node* temp = start;
    	struct node*newNode = createnode(dta);
    	for(i=0;i<n-1;i++){
    		temp = temp->link;
		}
		newNode->link = temp->link;
		temp->link->prev = newNode;
		temp->link=newNode;
		newNode->prev = temp;
    	printf("INSERTION SUCCESSFUL.");
	}
}


//INSERT BEFORE A NODE
void insertBeforeNode(){
	int n,i,dta; 
	printf("\nEnter node number before which you want to perform insertion : ");
    scanf("%d" ,&n); 
    if(n!=0){
    	printf("\nEnter value for new Node : ");
    	scanf("%d",&dta);
    	struct node* temp = start;
    	struct node*newNode = createnode(dta);
    	for(i=0;i<n-2;i++){
    		temp = temp->link;
		}
		newNode->link = temp->link;
		temp->link->prev = newNode;
		temp->link=newNode;
		newNode->prev = temp;
    	printf("INSERTION SUCCESSFUL.");
	}
}

///INSERT AT LAST
void insertLast(){
    int dta;
    printf("\nEnter value for new Node : ");
    scanf("%d",&dta);
    struct node * newNode = createnode(dta);
    struct node * temp =start;
    while(temp->link != NULL){
        temp = temp->link;
    }
    temp->link = newNode ;
    newNode->prev = temp;
}

///DELETE AT FIRST
void deletefirst(){
    if(start == NULL){
        printf("\nDeletion not possible.");
    }
    else{
        struct node *temp = start;
        start = start ->link;
        start->link->prev = start;
        printf("\nDeletion successful");
    }
}


///DELETE AT LAST
void deleteLast(){
    if(start == NULL){
        printf("\nDeletion not possible.");
    }
    else{
        struct node *temp = start;
        while(temp->link != NULL){
            temp = temp->link;
        }
        temp->prev->link = NULL;
        free(temp);
        printf("\nDeletion successful.");
    }
}

///DELETE AFTER A NODE
void deleteAfterNode(){
    if(start == NULL){
        printf("\nDeletion not possible.");
    }
    else{
        struct node*temp =start;
        struct node * previous;
        int n,i;
        printf("\nEnter node number after which you want to perform deletion : ");
        scanf("%d" ,&n);
        for(i=0;i<n;i++){
            previous = temp;
            temp=temp->link;
        }
        previous->link =temp->link;
        temp->link->prev = previous;
        free(temp);
    }
}

///DELETE BEFORE A NODE
void deleteBeforeNode(){
    if(start == NULL){
        printf("\nDeletion not possible.");
    }
    else{
        struct node*temp =start;
        struct node * previous;
        int n,i;
        printf("\nEnter node number after which you want to perform deletion : ");
        scanf("%d" ,&n);
        for(i=0;i<n-2;i++){
            previous = temp;
            temp=temp->link;
        }
        previous->link =temp->link;
        temp->link->prev = previous;
        free(temp);
    }
}

///DISPLAY
void display(){
    struct node *temp = start;
    if(start == NULL){
        printf("Linked list is empty");
    }
    else{
        printf("\nSTART <-> ");
        while(temp != NULL){
            printf("%d <-> ",temp->data);
            temp = temp ->link;
        }
        printf(" NULL");
    }
}

int main(){
    createList();
    display();
    insertFirst();
    display();
    insertLast();
    display();
    deletefirst();
    display();
    deleteLast();
    display();
    deleteAfterNode();
    display();
    deleteBeforeNode();
    display();
    insertAfterNode();
    display();
    insertBeforeNode();
    display();
}
