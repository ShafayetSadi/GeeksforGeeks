#include <stdio.h>

int main(){
	char name[100];
	printf("Enter your name: \n");
	fgets(name, 100, stdin);
	printf("Hi %sWelcome to RUET!\n", name);
	return 0;
}