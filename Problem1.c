//Write a C Program to print an Array.

#include <stdio.h>
int main(){
	int n, i;
	int arr[100];
	int a = arr[100];
	printf("Number of elements you want in your array.\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		printf("Enter element number %d : ", i);
		Scanf("%d", &arr[i]);
	}
	printf("Array of numbers are as follows : %d", a);
}
