#include <stdio.h>

struct Point{
	int x;
	int y;
};
typedef struct Student{
	int id;
	char name[100];
}ST;

void changeName(ST *ptr){
	strcpy(ptr->name, "NA");
}

int main(){
	struct Point p = {10, 20};
	struct Point *ptr = &p;
	printf("%d, %d\n", ptr->x, ptr->y);
	ptr->x = 100;
	ptr->y = 200;
	printf("%d, %d\n", p.x, p.y);

	ST s = {101, "Sadi"};
	changeName(&s);
	printf("%d - %s\n", s.id, s.name);
	return 0;
}
