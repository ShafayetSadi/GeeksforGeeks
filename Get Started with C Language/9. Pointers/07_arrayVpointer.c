#include <stdio.h>

int main(){
	int arr[] = {10, 20, 30, 40, 50};
	int *ptr = arr;
	printf("%zd  %p\n", sizeof(arr), ptr);
	printf("%zd  %p\n", sizeof(ptr), ptr);
	
	printf("%d\n", *(arr+2));
	printf("%d\n", ptr[2]);

	int *p1 = arr;
	int (*p2)[5] = &arr;
	printf("%d\n", *p1);
	printf("%d\n", **p2);


	return 0;
}
