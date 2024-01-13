#include <stdio.h>

int x = 10;
void changePointer(int *p){
	p = &x;
}
void changePointer2(int **pp){
	*pp = &x;
}

void swap(const char **p1, const char **p2){
	const char *temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main(){
	// Not changed
	int *p = NULL;
	changePointer(p);
	if(p==NULL){
		printf("Not Changed\n");
	}
	else{
		printf("%d\n", *p);
	}

	changePointer2(&p);
	if(p==NULL){
		printf("Not Changed\n");
	}
	else{
		printf("%d\n", *p);
	}

	const char *s1 = "Shafayet";
	const char *s2 = "Sadi";
	swap(&s1, &s2);
	printf("%s %s\n", s1, s2);

	return 0;
}
