#include <stdio.h>

void printArr(int *a, int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void selectionSort(int *a, int n){
    int minIndex,temp;
    for(int i=0; i<n-1; i++){
        printf("Iteration %d : ",i+1);
        minIndex = i;
        for(int j= i+1; j<n; j++){
            if(a[j] < a[minIndex]){
                minIndex = j;
            }
        }
        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
        printArr(a, n);
    }
}

int main(){
    int a[] = {27,15,39,21,28,70};
    int n = 6;
    printf("Array before Sorting : ");
    printArr(a, n);//PRINT BEFORE SORT

    printf("Array after each iteration : \n");
    selectionSort(a, n);

    printf("Array after Sorting : ");
    printArr(a, n);//PRINT AFTER SORT
    return 0;
}