#include <bits/stdc++.h>
using namespace std;

// Naive Sollution
// Time complexity is big O(n^2)
int trappingRainWater(int arr[], int n){
	int start = 0;
	int ans = 0;
	int end = start+1;
	for(int i=1; i<n-1; i++){
		if(arr[i]>=arr[start]){
			start = i;
			end = i+1;
			continue;
		}
		for(int j=i+1; j<n; j++){
			if(arr[j] >= arr[end]){
				end = j;
			}
			if(arr[end] >= arr[start]){
				break;
			}
		}
		if(arr[i] < arr[start]){
			if(arr[start] < arr[end]){
				ans += (arr[start] - arr[i]);
			}
			else{
				ans += (arr[end] - arr[i]);
			}
		}
	}
	return ans;
}

// Naive solution
int _trappingRainWater(int arr[], int n){
	int res = 0;
	for(int i=1; i<n-1; i++){
		int lmax = arr[i];
		for(int j=0; j<i; j++){
			lmax = max(lmax, arr[j]);
		}
		int rmax = arr[i];
		for(int j=i+1; j<n; j++){
			rmax = max(rmax, arr[j]);
		}
		res = res + (min(lmax, rmax) - arr[i]);
	}
	return res;
}

// Efficient Solution
// Pre compute left max end right max for every element
int __trappingRainWater(int arr[], int n){
	int res = 0;
	int lmax[n];
	int rmax[n];
	lmax[0] = arr[0];
	for(int i=1; i<n; i++){
		lmax[i] = max(arr[i], lmax[i-1]);
	}
	rmax[n-1] = arr[n-1];
	for(int i=n-2; i>=0; i--){
		rmax[i] = max(arr[i], rmax[i+1]);
	}
	for(int i=1; i<n-1; i++){
		res = res + (min(lmax[i], rmax[i]) - arr[i]);
	}
	return res;
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr1[] = {2, 0, 2};
	cout << trappingRainWater(arr1, 3) << " ";
	cout << _trappingRainWater(arr1, 3) << " ";
	cout << __trappingRainWater(arr1, 3) << endl;

	int arr2[] = {3, 0, 1, 2, 5};
	cout << trappingRainWater(arr2, 5) << " ";
	cout << _trappingRainWater(arr2, 5) << " ";
	cout << __trappingRainWater(arr2, 5) << endl;

	int arr[] = {15, 0, 20, 2, 13};
	cout << trappingRainWater(arr, 5) << " ";
	cout << _trappingRainWater(arr, 5) << " ";
	cout << __trappingRainWater(arr, 5) << endl;

	int arr3[] = {1, 2, 3};
	cout << trappingRainWater(arr3, 3) << " ";
	cout << _trappingRainWater(arr3, 3) << " ";
	cout << __trappingRainWater(arr3, 3) << endl;

	int arr4[] = {3, 2, 1};
	cout << trappingRainWater(arr4, 3) << " ";
	cout << _trappingRainWater(arr4, 3) << " ";
	cout << __trappingRainWater(arr4, 3) << endl;

	return 0;
}	