// Maximum value of arr[j] > arr[i] such that j > i
#include <bits/stdc++.h>
using namespace std;


// Naive solution
// Time complexity is big O(n^2)
int maxDiff(int arr[], int n){
	int ans = INT_MIN;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			ans = max(arr[j]-arr[i], ans);
		}
	}
	return ans;
}

// Efficient solution
// Time complexity is big O(n)
int _maxDiff(int arr[], int n){
	// it returns 0 if the array is sorted in decresing order
	int min_index = 0;
	int max_index = 0;
	for(int i=0; i<n; i++){
		if(arr[min_index] > arr[i] && i<=max_index){
			min_index = i;
		}
		if(arr[max_index] < arr[i] && min_index<=i){
			max_index = i;
		}
	}
	return arr[max_index] - arr[min_index];
}
// More Efficient
int __maxDiff(int arr[], int n){
	// it returns max diff even if the array is sorted in decreasing order
	int res = arr[1] - arr[0];
	int minVal = arr[0];
	for(int j=1; j<n; j++){
		res = max(res, arr[j] - minVal);
		minVal = min(minVal, arr[j]);
	}
	return res;
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {2, 3, 10, 6, 4, 8, 1};
	cout << maxDiff(arr, 7) << " ";
	cout << _maxDiff(arr, 7) << " ";
	cout << __maxDiff(arr, 7) << endl;

	int arr1[] = {7, 9, 5, 6, 3, 2};
	cout << maxDiff(arr1, 6) << " ";
	cout << _maxDiff(arr1, 6) << " ";
	cout << __maxDiff(arr1, 6) << endl;

	int arr2[] = {10, 20, 30};
	cout << maxDiff(arr2, 3) << " ";
	cout << _maxDiff(arr2, 3) << " ";
	cout << __maxDiff(arr2, 3) << endl;

	int arr3[] = {30,10, 8,2};
	cout << maxDiff(arr3, 4) << " ";
	cout << _maxDiff(arr3, 4) << " ";
	cout << __maxDiff(arr3, 4) << endl;

	return 0;
}	