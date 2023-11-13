///Write a C program to check duplicate number in an array///
#include<stdio.h>
int main(){
	int n,i,j,sum = 0;
	int arr[100];
	int duplicate = 0;
	printf("Enter Number of elements : ");
	scanf("%d", &n);
	printf("Enter array elements : \n");
	for(i=0; i<n; i++){
		printf("Enter Value for Index Number %d : ",i);
		scanf("%d", &arr[i]);
	}
	printf("Duplicate Numbers in the array are :  ");
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(arr[i]==arr[j]){
				printf("%d\t", arr[j]);
				duplicate = 1;
				break;
			}
			break;
		}
	}
	if(!duplicate){
		printf("There are NO Duplicate Numbers in the array");
	}
	return 0;
}
