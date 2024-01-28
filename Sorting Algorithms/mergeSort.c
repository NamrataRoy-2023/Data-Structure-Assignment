#include <stdio.h>

void printArr(int *a, int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void merge(int a[], int mid , int low, int high){
    int i, j, k;
    int b[100];
    i = low;
    j = mid+1;
    k = low;
    while(i<=mid && j<=high){
        if(a[i] < a[j]){
            b[k] = a[i];
            i++;
            k++;
        }
        else{
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while(i <=mid){
        b[k] = a[i];
        i++;
        k++;
    }
    while(j <= high){
        b[k] = a[j];
        j++;
        k++;
    }

    for(i=low; i<=high; i++){
        a[i] = b[i];
    }
}

void mergeSort(int a[], int low, int high){
    int mid;
    if(low < high){
        mid = (low + high)/2;
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        merge(a, mid, low, high);

        printf("After Iteration (low=%d, mid=%d, high=%d) : ", low, mid, high);
        printArr(a, high + 1);
        
    }
}

int main(){
    int a[] = {27,15,39,21,28,70};
    int n = 6;
    printf("Array before Sorting : ");
    printArr(a, n);//PRINT BEFORE SORT

    printf("Array after each iteration : \n");
    mergeSort(a, 0, n-1);

    printf("Array after Sorting : ");
    printArr(a, n);//PRINT AFTER SORT
    return 0;
}