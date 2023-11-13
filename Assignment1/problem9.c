///Write a C program to print reverse array///
#include<stdio.h>
int main(){
	int n,i;
	int arr[100];
	printf("Enter number of elements :");
	scanf("%d", &n);
	printf("Enter array elements : \n");
	for(i=0; i<n; i++){
		printf("Enter Value for Index Number %d : ",i);
		scanf("%d", &arr[i]);
	}
	printf("Reversed Array is : ");
	for(i=arr[n-1]; i>=0; i--){
		printf("%d\t", arr[i]);
	}
	return 0;
}
