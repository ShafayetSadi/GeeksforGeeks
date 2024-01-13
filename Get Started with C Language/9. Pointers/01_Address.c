/*
Applications of Pointers:
- Changing passed parameters
- Passing large objects efficientl
- Dynamic Memory Allocation
- Implementing data structures like linkedList, tree, BST etc.
- To do system level programming
- To return multiple values
- Used for accessing array elements
- To pass array parameters
*/
#include <stdio.h>
int main(){
	int x = 10;
	printf("%p\n", &x); // To get address
	printf("%d\n", *&x); // To get value of given address
	printf("\n");

	int *p;
	p = &x;
	printf("%d\n", x);
	printf("%d\n", *p);
	printf("%p\n", p);
	printf("%p\n", &p);

	x = x + 20;
	printf("%d\n", *p);
	*p = *p + 20;
	printf("%d\n", x);

	printf("\n");

	int *p1;
	char *p2;
	double *p3;
	printf("%2u\n", sizeof(p1));
	printf("%2u\n", sizeof(p2));
	printf("%2u\n", sizeof(p3));

	return 0;
}
