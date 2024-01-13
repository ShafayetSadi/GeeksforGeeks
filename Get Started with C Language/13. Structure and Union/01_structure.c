#include <stdio.h>

// struct Employee
// {
// 	int id;
// 	char name[100];
// };

typedef struct Employee
{
	int id;
	char name[100];
}Emp;

int main(){
	// struct Employee em;
	Emp em = {101, "Sadi"};
	printf("%d %s\n", em.id, em.name);
	
	em.id = 102;
	strcpy(em.name, "Shafayet");
	printf("%d %s\n", em.id, em.name);
	
	Emp em_2 = {.name="Saad", .id=103};
	printf("%d %s\n", em_2.id, em_2.name);

	return 0;
}
