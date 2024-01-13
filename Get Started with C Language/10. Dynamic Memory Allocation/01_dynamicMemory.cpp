#include <stdio.h>
#include <stdlib.h>

int *getArray(int n){
    //int *ptr = malloc(sizeof(int)*n); // This is for C
	int *ptr = (int*)malloc(sizeof(int)*n); // This is for C++
	for(int i=0; i<n; i++){
		ptr[i] = i+1;
	}
	return ptr;
}
int *getArray_(int n){
	// Initializes memory 0 values
	//int *ptr = calloc(n, sizeof(int));
	int *ptr = (int *)calloc(n, sizeof(int));
	return ptr;
}

int main(){
	int n = 5;
	int *ptr = getArray(n);
	for(int i=0; i<n; i++){
		printf("%d\n", ptr[i]);
	}

	free(ptr);

	return 0;
}
