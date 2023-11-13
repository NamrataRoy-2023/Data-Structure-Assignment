///Write a C Program to check wheather a String is Palindrome or not///
#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("enter a string : ");
	scanf("%s",str);
	int len = strlen(str);
	int i = len - 1;
	int j = 0;
	while(i>j){
		if(str[j++] == str[i--]){
			printf("is a Palindrome");
			return 0;
		}
	}
	printf("is NOT a Palindrome");
	return 0;

}

