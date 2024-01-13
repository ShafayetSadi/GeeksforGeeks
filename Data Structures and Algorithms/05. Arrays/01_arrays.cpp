#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	// Array has Contigous Memory
	// It is random access and cache friendliness
	// cache memory is the fastest
	int arr[] = {10, 15, 20, 25, 30};

	cout << arr[0] << endl;
	cout << arr[2] << endl;
	cout << arr[4] << endl;

	/*
	We have two types of Array
	1. Fixed sized array
	2. Dynamic sized array

	Fixed sized Array:
	int arr[100]; // it is stack allocated array
	int arr[n];
	int *arr = new int[n]; // it is heap allocated array
	int arr[] = {10, 20, 30};
	
	
	Dynamic sized Array:
	C++: vector
	Python: list

	*/

	return 0;
}	

