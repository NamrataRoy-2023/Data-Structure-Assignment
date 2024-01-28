#include <stdio.h>

void printArr(int *a, int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int partition(int a[], int low, int high){
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;

    do{
        while (a[i] <= pivot){
            i++;
        }

        while (a[j] > pivot){
            j--;
        }

        if(i < j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }while(i < j);

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}

void quickSort(int a[], int low, int high){
    int partitionIndex;//index of pivot after partition

    if (low < high){
        partitionIndex = partition(a, low, high);

        printf("After Iteration (low=%d, high=%d) : ", low, high);
        printArr(a, high - low + 1);

        quickSort(a, low, partitionIndex - 1);//sort left subarray
        quickSort(a, partitionIndex + 1, high);//sort right subarray
    }
}

int main(){
    int a[] = {27,15,39,21,28,70};
    int n = 6;
    printf("Array before Sorting : ");
    printArr(a, n);//PRINT BEFORE SORT

    printf("Array after each iteration : \n");
    quickSort(a, 0, n-1);

    printf("Array after Sorting : ");
    printArr(a, n);//PRINT AFTER SORT
    return 0;
}