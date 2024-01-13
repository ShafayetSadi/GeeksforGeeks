#include <bits/stdc++.h>
using namespace std;

void fun1()
{
	cout<<"fun1"<<endl;
}

void fun2()
{
	cout<<"Before fun1"<<endl;
	fun1();
	cout<<"After fun1"<<endl;
}
void fun(int n)
{
	if(n == 0)
		return;
	cout<<"GFG"<<endl;
	fun(n - 1);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Recursion
	// A function calls itself directly or indirectly

	cout<<"Before fun2"<<endl;
	fun2();
	cout<<"After fun2"<<endl;

	fun(5);
	
	return 0;
}	
/*
Applicatin of Recursion:
- Many algorithm techniques are based on recursion
	- Dynamic Programming
	- Backtracking
	- Divide and Conquer(Binary search, Quick sort, Merge Sort)
- Many problems inherently recursive
	- Tower of Hanoi
	- DFS based traversal 
*/