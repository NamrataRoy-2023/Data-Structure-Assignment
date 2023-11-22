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
        printf("\nEnter number of nodes you want to ebter : ");
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
        printf("NULL");
    }
}

int main(){
    createList();
    display();
}
