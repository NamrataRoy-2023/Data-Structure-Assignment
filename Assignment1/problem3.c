///Write a C Program to convert temparature from degree centigrade to farhenheit///
#include <stdio.h>
int main(){
	int c, f;
	printf("Enter the Celcious value : ");
	scanf("%d", &c);
	f = c*9/5+32;
	printf("Farhenheit value of %d is : %d",c,f);
	return 0;
}
