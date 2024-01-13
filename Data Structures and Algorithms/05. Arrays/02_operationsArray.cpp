#include <bits/stdc++.h>
using namespace std;


// search in unsorted array
// time complexity is big O(n)
int search(int arr[], int n, int x){
	for(int i=0; i<n; i++){
		if(arr[i]==x){
			return i;
		}
	}
}

// insert element in ith index
// time complexity is big O(n)
int insert(int arr[], int n, int x, int cap, int pos){
	if(n==cap){
		return n;
	}
	int index = pos - 1;
	for(int i=n; i>index; i--){
		arr[i] = arr[i-1];
	}
	arr[index] = x;
	return (n+1);
}

// delete an element in an array
// time complexity is big O(n)
int del(int arr[], int n, int x){
	int index = search(arr, n, x);
	cout << "index: " << index << endl;
	if(index==n){
		arr[index] = 0;
		return n-1;
	}
	for(int i=index; i<n-1; i++){
		arr[index] = arr[index+1];
	}
	arr[n-1] = 0;
	return n-1;
}

// Note: inset at the end and delete from the end can be done in big O(1)

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {20, 5, 7, 25};
	int n = 4;
	int x = 7;
	cout << search(arr, n, x) << endl;

	int arr1[5] = {5, 10, 20};
	n = 3;
	x = 7;
	int pos = 2;
	int cap = 5;
	cout << insert(arr1, n, x, cap, pos) << endl;
	for(auto x : arr1){
		cout << x << " ";
	}cout << endl;

	int arr2[] = {20, 5, 7, 25};
	n = 4;
	x = 7;
	cout << del(arr2, n, x) << endl;
	for(auto x : arr2){
		cout << x << " ";
	}cout << endl;

	return 0;
}	