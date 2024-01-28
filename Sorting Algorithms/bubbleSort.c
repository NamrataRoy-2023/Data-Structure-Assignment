#include <stdio.h>

void printArr(int *a, int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubbleSortAdaptive(int *a, int n){
    int temp;
    int isSorted = 0;
    for(int i=0;i<n-1;i++){
        isSorted = 1;
        printf("Iteration %d : ", i+1);
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                isSorted = 0;
            }
        }
        printArr(a,n);
        if(isSorted){
            return;
        }
    }
}

int main(){
    int a[] = {27,15,39,21,28,70};
    int n = 6;
    printf("Array before Sorting : ");
    printArr(a, n);//PRINT BEFORE SORT

    printf("Array after each iteration : \n");
    bubbleSortAdaptive(a, n);

    printf("Array after Sorting : ");
    printArr(a, n);//PRINT AFTER SORT
    return 0;
}