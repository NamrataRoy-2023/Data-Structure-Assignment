////Write a C Program to check wheather a String is Palindrome or not////
#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("enter a String : ");
	scanf("%c",str);
	int i = strlen(str) - 1;
	int j = 0;
	while(i>j){
		if(str[j++] == str[i--]){
			printf("%d is a Palindrome",str);
			return 0;
		}
		else{
			printf("%d is NOT a Palindrome",str);
			
		}
		return 0;
	}
}

