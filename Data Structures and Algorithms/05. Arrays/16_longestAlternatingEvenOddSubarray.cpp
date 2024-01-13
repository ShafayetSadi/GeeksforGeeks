#include <bits/stdc++.h>
using namespace std;

// Naive solution same as prev max subarray sum's naive solution
// With two for loops, we can find the longest even odd subarray
// Time complexity is big O(n^2)
int longestEvenOdd(int arr[], int n){
	int res = 1;
	for(int i=0; i<n; i++){
		int curr = 1;
		for(int j=i+1; j<n; j++){
			if(arr[j]%2==0 && arr[j-1]%2==1 || arr[j]%2==1 && arr[j-1]%2==0){
				curr++;
			}
			else{
				break;
			}
		}
		res = max(res, curr);
	}
	return res;
}

// Efficient Solution
// Time complexity is big O(n)
int _longestEvenOdd(int arr[], int n){
	int res = 1;
	bool flag = (arr[0]%2==0);
	int curr = 1;
	for(int i=1; i<n; i++){
		if(flag==true && arr[i]%2==1)
		{
			flag = false;
			curr++;
			res = max(curr, res);
		}
		else if(flag==false && arr[i]%2==0)
		{
			flag = true;
			curr++;
			res = max(curr, res);
		}
		else
		{
			flag = (arr[i]%2==0);
			curr = 1;
		}
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr1[] = {10, 12, 14, 7, 8};
	cout << longestEvenOdd(arr1, 5) << " ";
	cout << _longestEvenOdd(arr1, 5) << endl;

	int arr2[] = {7, 10, 13, 14};
	cout << longestEvenOdd(arr2, 4) << " ";
	cout << _longestEvenOdd(arr2, 4) << endl;

	int arr3[] = {10, 12, 8, 4};
	cout << longestEvenOdd(arr3, 4) << " ";
	cout << _longestEvenOdd(arr3, 4) << endl;



	return 0;
}	