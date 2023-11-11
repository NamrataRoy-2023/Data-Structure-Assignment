////Write a C Program to print an Array////
#include <stdio.h>
int main(){
	int n, i;
	printf("Number of elements you want in your array - ");
	scanf("%d", &n);
	int arr[n];
	for(i=1; i<=n; i++){
		printf("Enter element number %d : ", i);
		scanf("%d", &arr[i]);	
	}
	printf("Array of numbers are as follows : ");
	for(i=1; i<=n; i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
