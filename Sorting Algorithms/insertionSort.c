#include <stdio.h>

void printArr(int *a, int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertionSort(int *a, int n){
    int key,j;
    for(int i=1; i<n-1; i++){
        printf("Iteration %d : ",i);
        key = a[i];
        j = i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        printArr(a, n);
    }
}

int main(){
    int a[] = {27,15,39,21,28,70};
    int n = 6;
    printf("Array before Sorting : ");
    printArr(a, n);//PRINT BEFORE SORT

    printf("Array after each iteration : \n");
    insertionSort(a, n);

    printf("Array after Sorting : ");
    printArr(a, n);//PRINT AFTER SORT
    return 0;
}