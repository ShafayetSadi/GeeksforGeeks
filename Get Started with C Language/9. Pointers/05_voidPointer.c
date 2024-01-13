#include <stdio.h>

int main(){
	// No Associated Type
	// Both way convertible to any type
	int x = 10;
	void *p1 = &x;
	int *p2 = p1;
	char y = 'a';
	char *p3 = &y;
	p1 = p3;

	printf("%d", p1); // Compiler Error
	printf("%d", *(int*)ptr) // Compiles fine

	/*
	Applications:
	- General perpose memory functions return void. Ex-malloc(),
	 calloc(), etc.
	- Used to implement generics in C. Ex-qsort()
	*/


	return 0;
}
