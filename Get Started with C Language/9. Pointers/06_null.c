#include <stdio.h>

#define NULL (void*)0

int main(){
	/*
	int *ptr;
	.
	.
	.
	printf("%p\n", ptr);
	*/

	int *ptr = NULL;
	// int *ptr = 0; // zero is comparable to NULL
	//
	//
	if(ptr!=NULL){
		printf("%p", ptr);
	}
	
	/*
	Applicatons:
	- For pointers with no valid memory address
	- Funcions use NULL to return invalid output.
	- In data structures like linkedList, tree
	- A NULL converts to bool value falsea
	- NULL can be used for any data type
	*/

	return 0;
}
