#include <bits/stdc++.h>
using namespace std;

// Tail Recursion
void fun1(int n)
{
	// start:
	if(n == 0)
		return;
	cout << n << " ";
	fun1(n - 1);
	// n = n-1
	// go to start

}// This takes less time on modern compiler because it it tail recursive
// It uses Tail Call Elemination

void fun2(int n)
{
	// It is not tail recursive
	if(n == 0)
		return;
	fun2(n - 1);
	cout << n << " ";

}

void fun3(int n, int k){
	// It is tail recursive
	if(n==0){
		return;
	}
	cout << k << " ";
	fun3(n-1, k+1);
}

int fact1(int n){
	// It is not tail recursive
	if(n==0 || n==1){
		return 1;
	}
	return n*fact1(n-1);
}

int fact2(int n, int k){
	// It is tail recursive
	if(n==0 || n==1){
		return k;
	}
	return fact2(n-1, k*n);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	fun1(5);
	cout << endl;
	fun2(5);
	cout << endl;
	fun3(5, 1);
	cout << endl;
	cout << fact1(5) << endl;
	cout << fact2(5, 1) << endl;

	return 0;
}	