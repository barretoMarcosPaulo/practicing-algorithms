#include<stdio.h>

void main(){
	char string_input[100];
	scanf("%[^\n]%*c", &string_input);
	printf("Hello, World!\n");
	printf("%s\n",string_input);
}