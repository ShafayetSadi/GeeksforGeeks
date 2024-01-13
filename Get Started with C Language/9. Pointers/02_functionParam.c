#include <stdio.h>

int fun(int *ptr){
	*ptr = *ptr + 5;
}

int main(){
	int x = 5;
	printf("%d\n", x);
	fun(&x);
	printf("%d\n", x);

	return 0;
}
