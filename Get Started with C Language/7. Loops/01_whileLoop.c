#include <stdio.h>

int main(){
	/*
	while(condition){
		// code
	}
	*/
	int i=5;
	while(i--){
		printf("Hello World!\n");
	}

	/*
	do{
		// code
	}while(condition)
	*/
	i = 0;
	do{
		printf("%d: Hello\n", i);
		i++;
	}while(i<3);

	printf("Hola\n");

	i = 3;
	do{
		printf("%d: Hello\n", i);
		i++;
	}while(i<3);

	return 0;
}