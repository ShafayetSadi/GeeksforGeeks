#include <stdio.h>

int main(){
	// Width - maximum characters
	// Precision - Maximum characters in case of string
	//  Digits after decimal point in case of floating point numbers
	// 	Almost same as width in case of integers
	// 	it is written after a dor(.)
	int x = 124;
	printf("%d\n", x);
	printf("%5d\n", x);
	char y[] = "gfg";
	printf("%5s\n", y);
	float z = 1.2;
	printf("%5g\n", z);
	// printf("%*s\n", 6, x); //This is not working

	printf("%-5d %-5s %f\n", x, y, z);
	printf("%05d\n", x);
	printf("%+5d\n", x);	

	char name[] = "Shafayet";
	printf("%.3s\n", name);
	printf("%5.3s\n", name);
	printf("%*.*s\n", 5, 3, name);
	printf("%-5.3s\n", name);

	double d = 1.345;
	printf("%.2f\n", d);
	printf("%5.2f\n", d);
	printf("%*.*f\n", 5, 2, d);
	printf("%0*.*f\n", 5, 2, d);
	printf("%-5.2f\n", d);

	printf("%.2e\n", d);
	printf("%5.2e\n", d);
	printf("%*.*e\n", 5, 2, d);
	printf("%0*.*e\n", 5, 2, d);
	printf("%-5.2e\n", d);

	printf("%.2g\n", d);
	printf("%5.2g\n", d);
	printf("%*.*g\n", 5, 2, d);
	printf("%0*.*g\n", 5, 2, d);
	printf("%-5.2g\n", d);

	d = 1345678;
	printf("\n%.2g\n", d);

	printf("%.5d\n", x);
	printf("%.5d\n", -x);
	printf("%5d\n", x);
	printf("%05d\n", -x);

	return 0;
}
