///Write a C program to print the largest and second largest element of the array///
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
			if(arr[i] < arr[j]){
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
	printf("The second largest element of the array is : %d", arr[1]);
	return 0;
}
