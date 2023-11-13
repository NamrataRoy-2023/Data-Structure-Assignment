///Write a C program to check the sum of all elements of an array///
#include<stdio.h>
int main(){
	int n,i,sum = 0;
	int arr[100];
	printf("Enter Number of elements : ");
	scanf("%d", &n);
	printf("Enter array elements : \n");
	for(i=0; i<n; i++){
		printf("Enter Value for Index Number %d : ",i);
		scanf("%d", &arr[i]);
	}
	printf("Entered Array as follows : ");
	for(i=0; i<n; i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for(i=0; i<n; i++){
		sum = sum + arr[i];
	}
	printf("Sum of all elements of the array is : %d", sum);
	return 0;
}
