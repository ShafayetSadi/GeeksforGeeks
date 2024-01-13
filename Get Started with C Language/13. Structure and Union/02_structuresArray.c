#include <stdio.h>

typedef struct Point{
	int x, y;
} Point;

int main(){
	Point arr[6];
	for(int i=1; i<=5; i++){
		arr[i].x = i;
		arr[i].y = i*i;
	}
	for(int i=1; i<=5; i++){
		printf("(%d, %d)\n", arr[i].x, arr[i].y);
	}

	return 0;
}