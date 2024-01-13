#include <stdio.h>

int main(){
	int n, d;
	printf("Enter current day and N days\n");
	scanf("%d%d", &d, &n);
	n = n%7;
	n = d-n;
	if(n<0){
		printf("Answer is: %d", n+7);
	}
	else{
		printf("Answer is: %d", n);
	}


	return 0;
}