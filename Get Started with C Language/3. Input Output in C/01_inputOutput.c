/*
InputDevice -(Buffer)-> Process(A program in execution) -(Buffer)-> OutputDevice

stdin - Standard input
stdout - Standard output
stderr - Standard error

input function - scanf(), fgets(), getchar()
output function - printf(), fputs(), putchar()

escape sequence - \

*/

#include <stdio.h>

int main(){
	printf("Shafayet Sadi\n");
	int x = 10;
	printf("The value of x is %d\n", x);
	int y = 20;
	printf("Sum of %d and %d is %d\n", x, y, x+y);

	char c = 'g';
	printf("%c%d\n", c, x);
	printf("%d * %d = %d\n", 5, 10, 5*10);

	// scanf("....formatString...", ...addressesOfVariables...)
	int a, b;
	printf("Enter the first number: \n");
	scanf("%d", &a);
	printf("Enter the second number: \n");
	scanf("%d", &b);

	printf("Sum is %d\n", a+b);

	char name[100];
	printf("Enter your name: \n");
	scanf("%s", name);
	printf("Hi %s,\n", name);
	printf("Welcome to RUET!\n");

	printf("Enter two numbers: \n");
	scanf("%d%d", &x, &y);
	printf("Multiplication is %d\n", x*y);

	/*
	scanf("%dgfg%d", &x, &y);
	if we write like this, then we have to type : 10gfg30
	We have provide the string that is written in between format
	specifier.
	*/

	return 0;
}