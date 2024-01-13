/*
Basics is same as C++.
It's in my notebook.

Applications of Function/Methods;
- Avoid code redundancy and ease maintenance
- Make code modular
- Abstraction
- Avoid variable name collisions

Prototype Declaration

How function works?
- Function call stack

Inline Function

This are in my notebook.
*/
#include <stdio.h>

void fun(){
	printf("Inside function\n");
}

inline int getMax(int x, int y){
	return (x>y) ? x : y;
}

int main(){
	printf("Before function call\n");
	fun();
	printf("After function call\n");
	return 0;
}