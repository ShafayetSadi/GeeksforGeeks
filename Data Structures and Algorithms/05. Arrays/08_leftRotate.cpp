#include <bits/stdc++.h>
using namespace std;

void leftRotatebyOne(int arr[], int n){
	int temp = arr[0];
	for(int i=1; i<n; i++){
		arr[i-1] = arr[i];
	}
	arr[n-1] = temp;
}

// Naive solution is we can call leftRotatebyOne d times
// Its time complexity is big O(n*d) and space complexity is O(1)

// Another solution
// Time complexity is big O(n) and space complexity is O(d)
void leftRotatebyD(int arr[], int n, int d){
	int temp[d];
	for(int i=0; i<d; i++){
		temp[i] = arr[i];
	}
	for(int i=d; i<n; i++){
		arr[i-d] = arr[i];
	}
	for(int i=n-d; i<n; i++){
		arr[i] = temp[i-d-1];
	}
}

// Efficient solution
// Time complexity is big O(n) and space complexity is O(1)
void _leftRotatebyD(int arr[], int n, int d){
	reverse(arr, arr+d);
	reverse(arr+d, arr+n);
	reverse(arr, arr+n);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {1, 2, 3, 4, 5};
	int n = 5;
	int d = 2;
	// leftRotatebyD(arr, n, d);
	_leftRotatebyD(arr, n, d);

	for(auto x : arr){
		cout << x << " ";
	}cout << endl;

	return 0;
}	