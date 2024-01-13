#include <stdio.h>

union Test{
	int x, y;
};

int main(){
	union Test t;
	t.x = 10;
	printf("%d %d\n", t.x, t.y);
	t.y = 20;
	printf("%d %d\n", t.x, t.y);
	return 0;
}