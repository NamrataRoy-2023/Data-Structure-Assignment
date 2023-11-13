///Write a C program to sort an array///
#include<stdio.h>
int main(){
	int a,i,j,n,t;
	printf("Enter number of elements : ");
	scanf("%d", &n);
	int arr[100];
	printf("Enter Elements : \n");
	for(i=0; i<n; i++){
		printf("Enter element number for index number %d : ", i);
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(arr[i] > arr[j]){
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
	printf("Element in ascending order is as follows : ");
	for(i=0; i<n; i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}

