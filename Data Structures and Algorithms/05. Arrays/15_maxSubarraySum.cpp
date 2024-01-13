// Maximum contiguous subarray sum
#include <bits/stdc++.h>
using namespace std;

// Naive solution
// Time Complexity is big O(n^2)
int maxSubarraySum(int arr[], int n){
	int res = INT_MIN;
	for(int i=0; i<n; i++){
		int curr = 0;
		for(int j=i; j<n; j++){
			curr += arr[j];
			res = max(res, curr);
		}
	}
	return res;
}

// Efficient solution
// Kadane's Algorithm
// Time Complexity is big O(n)
int _maxSubarraySum(int arr[], int n){
	int maxEnding = arr[0];
	int res = arr[0];
	for(int i=1; i<n; i++){
		maxEnding = max(maxEnding+arr[i], arr[i]);
		res = max(res, maxEnding);
	}
	return res;
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr1[] = {2, 3, -8, 7, -1, 2, 3};
	cout << maxSubarraySum(arr1, 7) << " ";
	cout << _maxSubarraySum(arr1, 7) << endl;

	int arr2[] = {5, 8, 3};
	cout << maxSubarraySum(arr2, 3) << " ";
	cout << _maxSubarraySum(arr2, 3) << endl;

	int arr3[] = {-6, -1, -8};
	cout << maxSubarraySum(arr3, 3) << " ";
	cout << _maxSubarraySum(arr3, 3) << endl;

	return 0;
}	