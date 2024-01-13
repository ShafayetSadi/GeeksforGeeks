/*
An element in an array is called majority if it appears
more than n/2 times.
*/
#include <bits/stdc++.h>
using namespace std;

// Naive solution
// Time complexity is big O(n^2)
// Returns the first index of mejority element
int majorityElement(int arr[], int n){
	for(int i=0; i<n; i++){
		int count = 1;
		for(int j=i+1; j<n; j++){
			if(arr[i] == arr[j]){
				count++;
			}
		}
		if(count > n/2){
			return i;
		}
	}
	return -1;
}

// Efficient solution
// Returns any one
 index of mejority element
// Time complexity is big O(n)
int _majorityElement(int arr[], int n){
	// find a candidate
	int res = 0;
	int count = 1;
	for(int i=1; i<n; i++){
		if(arr[res] == arr[i]){
			count++;
		}
		else{
			count--;
		}
		if(count==0){
			res = i;
			count = 1;
		}
	}

	// check if the candidate is actually a mejority
	count = 0;
	for(int i=0; i<n; i++){
		if(arr[res]==arr[i]){
			count++;
		}
	}
	if(count <= (n/2)){
		res = -1;
	}
	return res;
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr1[] = {8, 3, 4, 8, 8};
	cout << majorityElement(arr1, 5) << " ";
	cout << _majorityElement(arr1, 5) << endl;

	int arr2[] = {3, 7, 4, 7, 7, 5};
	cout << majorityElement(arr2, 6) << " ";
	cout << _majorityElement(arr2, 6) << endl;

	int arr3[] = {20, 30, 40, 50, 50, 50, 50};
	cout << majorityElement(arr3, 7) << " ";
	cout << _majorityElement(arr3, 7) << endl;

	return 0;
}	