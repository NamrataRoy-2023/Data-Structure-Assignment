///CIECULAR LINKED LIST PRACTICE
#include<stdio.h>
#include<stdlib.h>

///CREATE NODE
struct node
{
    int data;
    struct node *link;
};
struct node*start = NULL;

///ALLOCATE MEMORY TO A NODE
struct node *createnode(int val){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->link = start;
    return newNode;
}

///CREATE LINKED LIST
void createList(){
    if(start == NULL){
        int n,i;
        printf("\nEnter the number of nodes you want : ");
        scanf("%d", &n);
        if(n != 0){
            int dta;
            struct node *temp;
            struct node *newNode = createnode(dta);
            start = newNode;
            temp = start;
            printf("\n enter Node 1 value: ");
            scanf("%d", &dta);
            newNode ->data = dta;
            for(i=2; i<=n; i++){
                printf("\n enter Node %d value : ",i);
                scanf("%d", &dta);
                struct node *newNode = createnode(dta);
                temp -> link = newNode;
                temp = temp ->link;
            }
            temp->link = start;
        }
        printf("\nList created");
    }
    else{
        printf("\nList is already Created");
    }
}

void display(){
    struct node *temp;
    if(start == NULL){
        printf("\nLinked list is empty");
    }
    else{
        temp = start;
        printf("\nSTART -> ");
        do{
            printf("%d -> ", temp->data);
            temp = temp ->link;
        }while(temp != start);
        printf(" START");
    }
}

void insertFront(){
    int dta;
    printf("\n Enter NEW Node value: ");
    scanf("%d", &dta);
    struct node *newNode = createnode(dta);
    newNode->link = start;
    start = newNode;
}

void insertAfterNode(){
	int dta,n,i;
    printf("\n Enter NEW Node value: ");
    scanf("%d", &dta);
    struct node *newNode = createnode(dta);
    struct node *temp = start;
    printf("Enter node after which you perform insertion : ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        temp=temp->link;
    }
    newNode->link = temp->link;
    temp->link = newNode;
    printf("\nNew node inserted successfully");
}

void insertBeforeNode(){
	int dta,n,i;
    printf("\n Enter NEW Node value: ");
    scanf("%d", &dta);
    struct node *newNode = createnode(dta);
    struct node *temp = start;
    printf("Enter node before which you perform insertion : ");
    scanf("%d",&n);
    for(i=1;i<n-1;i++){
        temp=temp->link;
    }
    newNode->link = temp->link;
    temp->link = newNode;
    printf("\nNew node inserted successfully");
}

void insertEnd(){
	int dta;
    struct node *temp;
    struct node* newNode;
    if(newNode == NULL){
        printf("Memory allocation not possible");
        return;
    }
    else{
        printf("\nEnter NEW Node value: ");
        scanf("%d", &dta);
        newNode = createnode(dta);
        temp = start;
        while(temp->link != NULL){
            temp = temp ->link;
        }
        temp ->link = newNode;
    }
}

void deleteFront(){
    struct node *temp = start;
    if(start == NULL){
        printf("\nLinked list is already empty");
        return;
    }
    else{
        start = start->link;
        free(temp);
    }
    printf("\nFIRST Node successfully deleted.");
}

void deleteEnd(){
    struct node *temp = start;
    struct node *prev;
    if(start == NULL){
        printf("\nLinked list is already empty");
        return;
    }
    else{
        while(temp->link !=NULL){
            prev = temp;
            temp = temp->link;
        }
        prev->link=NULL;
        free(temp);
    }
    printf("\nLAST Node successfully deleted.");
}

void deleteAfterNode(){
    struct node *temp = start;
    struct node * prev;
    if(start == NULL){
        printf("\nLinked list is already empty");
        return;
    }
    else{
    	int i,n;
    	printf("\nEnter the node after which you want to delete : ");
    	scanf("%d", &n);
    	for(i=1;i<=n;i++){
    		prev=temp;
    		temp= temp->link;
		}
		prev->link = temp->link;
		free(temp);
	}
}

void deleteBeforeNode(){
    struct node *temp = start;
    struct node * prev;
    if(start == NULL){
        printf("\nLinked list is already empty");
        return;
    }
    else{
    	int i,n;
    	printf("\nEnter the node before which you want to delete : ");
    	scanf("%d", &n);
    	for(i=1;i<=n-2;i++){
    		prev=temp;
    		temp= temp->link;
		}
		prev->link = temp->link;
		free(temp);
	}
}

int main(){
	createList();
	display();
    insertFront();
    display();
    insertEnd();
    display();
    deleteFront();
    display();
    deleteEnd();
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
