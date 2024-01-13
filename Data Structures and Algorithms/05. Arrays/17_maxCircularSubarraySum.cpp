#include <bits/stdc++.h>
using namespace std;

// Naive solution
// Time complexity is big O(n^2)
int maxCircularSum(int arr[], int n){
	int res = arr[0];
	for(int i=0; i<n; i++){
		int currMax = arr[i];
		int currSum = arr[i];
		for(int j=1; j<n; j++){
			int index = (i+j) % n;
			currSum += arr[index];
			currMax = max(currSum, currMax);
		}
		res = max(res, currMax);
	}
	return res;
}

// Efficient solution
// Idea: Take the max of the following
// 		1. Max sum of a normal subarray
// 		2. Max sum of a circular subarray
// 			- To find the sum of a circular subarray
// 				1. Find the total sum of the array
// 				2. Find the min sum of a normal subarray
// 				3. Do (Total sum - min sum of subarray)
// 			- Another way is we can invert the array with -1. Then we can
// 			  use the same algorithm/function of max subarray sum to find 
// 			  the min subarray sum.
// Time complexity is big O(n)
int _maxCircularSum(int arr[], int n){
	int maxEnding = arr[0];
	int res1 = arr[0];
	for(int i=1; i<n; i++){
		maxEnding = max(maxEnding+arr[i], arr[i]);
		res1 = max(res1, maxEnding);
	}
	if(res1 < 0){
		return res1;
	}
	int minEnding = arr[0];
	int res2 = arr[0];
	for(int i=1; i<n; i++){
		minEnding = min(minEnding+arr[i], arr[i]);
		res2 = min(res2, minEnding);
	}
	// cout << res1 << " " << res2 << endl;
	int total_sum = accumulate(arr, arr+n, 0);
	return max(res1, total_sum-res2);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr1[] = {5, -2, 3, 4};
	cout << maxCircularSum(arr1, 4) << " ";
	cout << _maxCircularSum(arr1, 4) << endl;

	int arr2[] = {8, -4, 3, -5, 4};
	cout << maxCircularSum(arr2, 5) << " ";
	cout << _maxCircularSum(arr2, 5) << endl;

	int arr3[] = {3, -4, 5, 6, -8, 7};
	cout << maxCircularSum(arr3, 6) << " ";
	cout << _maxCircularSum(arr3, 6) << endl;

	return 0;
}	