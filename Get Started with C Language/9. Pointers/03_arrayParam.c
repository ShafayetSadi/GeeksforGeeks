#include <stdio.h>

void fun(int arr[]){
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n", n);
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[]={10, 20, 30, 40, 50};
	int n = sizeof(arr)/sizeof(arr[0]);

	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	fun(arr);


	return 0;
}
