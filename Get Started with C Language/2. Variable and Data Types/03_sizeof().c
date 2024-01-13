#include <stdio.h>

int main(){
	/*
	sizeof() is an operator in C. It returns number of bytes required for
	a data type. It can be used with variables and literals also.
	Operand's size is evaluated at compile time.
	*/
	printf("%2u\n", sizeof(int));
	printf("%2u\n", sizeof(char));
	printf("%2u\n", sizeof(long long));
	printf("%2u\n", sizeof(float));
	printf("%2u\n", sizeof(double));

	int x = 10;
	double d = 11.5;
	printf("%2u\n", sizeof(x));
	printf("%2u\n", sizeof(d));
	printf("%2u\n", sizeof(15LL));
	printf("%2u\n", sizeof(13.6f));
	printf("%2u\n", sizeof(x+10));

	printf("%d\n", x);
	printf("%2u\n", sizeof(x++));
	printf("%d\n", x);
	return 0;
}