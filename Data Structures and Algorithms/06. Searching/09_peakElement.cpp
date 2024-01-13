#include <bits/stdc++.h>
using namespace std;
#define int long long int

// If an element is not smaller than his neighbout than it is called
// a peak element
// arr[] = {5, 10, 20, 15, 6} --> 20 is peak
// arr[] = {10, 20, 15, 5, 23, 90, 61} --> 20,90 is both peak
// arr[] = {80, 70, 60} --> 80 is peak
// arr[] = {80, 70, 60, 90} --> 80, 90 is both peak

// Naive solution
int getPeak(int arr[], int n){
	if(n==1) return arr[0];
	if(arr[0] >= arr[1]) return arr[0];
	if(arr[n-1] >= arr[n-2]) return arr[n-1];
	for(int i=1; i<n-1; i++){
		if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]) return arr[i];
	}
}

// Efficient way is to use binary search
int _getPeak(int arr[], int n){
	int lo = 0, hi = n-1, mid;
	while(lo <= hi){
		mid = lo + (hi-lo)/2;
		if((mid==0 || arr[mid-1] <= arr[mid]) && (mid==n-1 || arr[mid+1] >= arr[mid]))
			return mid;
		if(mid > 0 && arr[mid-1] >= arr[mid]) high = mid-1;
		else lo = mid+1;
	}
	return -1;
}



int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	return 0;
}	