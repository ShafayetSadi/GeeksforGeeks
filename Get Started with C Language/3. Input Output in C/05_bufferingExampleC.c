#include <stdio.h>

int main(){
	int x, y;
	printf("Enter first integer: \n");
	scanf("%d", &x);
	printf("Enter second integer: \n");
	scanf("%d", &y);

	printf("Multiplication is %d\n", x*y);

	return 0;
}
/*
There are two ways to run.
One:
>>Enter first integer:
>>10 
>>Enter second integer:
>>20
>>Multiplication is 200

Two:
>>Enter first integer:
>>10 20 
>>Enter second integer:
>>Multiplication is 200
*/