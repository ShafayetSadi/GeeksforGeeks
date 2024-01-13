#include <bits/stdc++.h>
using namespace std;

// Time complexity is big O(2^n)
int generateSubset(int arr[],int n,int sum, int curr=0, int index=0){
	if(index == n){
		if(curr == sum){
			return 1;
		}
		return 0;
	}
	return generateSubset(arr, n, sum, curr, index+1) + generateSubset(arr, n, sum, curr+arr[index], index+1);
}

int countSubsetSum(int arr[], int n, int sum){
	if(n==0){
		return (sum==0)? 1 : 0;
	}
	return countSubsetSum(arr, n-1, sum) + countSubsetSum(arr, n-1, sum - arr[n-1]);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {10, 5, 2, 3, 6};
	int n = 5;
	int sum = 8;
	cout << generateSubset(arr, n, sum) << endl;
	cout << countSubsetSum(arr, n, sum) << endl;

	return 0;
}	