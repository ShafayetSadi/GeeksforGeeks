/*
break, continue is same as C++.
*/
#include <stdio.h>

int main(){
	/*
	for(Init; Condition; change_loop_variable){
		// code
	}
	*/
	for(int i=0; i<3; i++){
		printf("%d: Hello\n", i);
	}

	return 0;
}