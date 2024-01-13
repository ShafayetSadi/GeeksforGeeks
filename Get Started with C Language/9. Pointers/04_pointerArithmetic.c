#include <stdio.h>

int main(){
	// ++, --, ptr+int, ptr-int and ptr1-ptr2
	int arr[] = {10, 20, 30, 40, 50};
	int *ptr = arr;
	printf("%d  %p\n", *ptr, ptr);
	ptr++;
	printf("%d  %p\n", *ptr, ptr);


	return 0;
}
