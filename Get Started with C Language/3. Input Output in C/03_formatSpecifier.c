/*
Format Specifiers for Integers:

d - int
u - unsigned int
ld - long
lld - long long
zd - size_t
x - Hexadecimal
o - Octal
i - almost same as d.

Format Specifiers for Floating Point:

f - double in fixed point notation
e - double in e form
g - double in fixed or e form(Total max 6 digits, No trailing 0s)
	for extra zeros use %#g
A prefix L is used for long doubles.

Other Format Specifier:

c - char
s - string
p - pointer or address
n - Stores number of characters printed so far before encountering %n
*/
#include <stdio.h>

int main(){
	printf("Integer\n");
	int x = 10;
	printf("%d\n", x);
	long y = 20;
	printf("%ld\n", y);\
	unsigned z = 30;
	printf("%u\n", z);
	long long w = 40;
	printf("%lld\n", w);
	size_t u = sizeof(x);
	printf("%zd\n", u);

	printf("\nFloating Point\n");
	float a = 10.250;
	double b = 125.387648;
	double c = 15e+6;
	printf("%f %f %f\n", a, b, c);
	printf("%e %e %e\n", a, b, c);
	printf("%g %g %g\n", a, b, c);

	printf("\nOther\n");
	int ch = 's';
	char name[] = "Shafayet";
	int k;
	printf("%c %s %p\n", ch, name, &ch);
	printf("Hello%n there.\n", &k); // It's not working. I don't know why?
	printf("%d\n", k);

	return 0;
}