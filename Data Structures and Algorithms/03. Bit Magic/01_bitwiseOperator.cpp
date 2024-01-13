#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	// Basic Theory is in my notebook
	// Read that first

	int x = 3;
	int y = 6;
	// Bitwise AND, OR, XOR
	cout << (x&y) << endl;
	cout << (x|y) << endl;
	cout << (x^y) << endl;

	// Left shift operator
	cout << (x<<1) << endl;
	cout << (x<<2) << endl;
	cout << (x<<y) << endl;

	// Right shift operator
	x = 123;
	cout << (x>>1) << endl;
	cout << (x>>2) << endl;
	cout << (x>>y) << endl;
	
	// Bitwise Not
	unsigned int n = 1;
	cout << (~n) << endl;
	n = 5;
	cout << (~n) << endl;

	x = 1;
	cout << (~x) << endl;
	x = 5;
	cout << (~x) << endl;

	return 0;
}	