#include <bits/stdc++.h>
using namespace std;

// Example of rotated array
// arr[] = {10, 20, 30, 40, 50, 8, 9}
// arr[] = {100, 200, 300, 10, 20}

// Naive solution is to search the whole array in O(n)
// Efficient way is to use binary search
// Time complexity is O(log(n)) and O(1) auxiliary space
int search(int arr[], int n, int x){
	int lo = 0, hi = n-1, mid;
	while(lo <= hi){
		mid = lo + (hi-lo)/2;
		if(arr[mid] == x) return mid;
		if(arr[lo] < arr[mid]){
			if(x >= arr[lo] && x < arr[hi]){
				hi = mid-1;
			}
			else lo = mid+1;
		}
		else{
			if(x > arr[mid] && x <= arr[hi]){
				lo = mid+1;
			}
			else hi = mid-1;
		}
	}
	return -1;
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {10, 20, 40, 60, 5, 8};
	int x = 5, n = 6;
	cout << search(arr, n, x) << endl;
	return 0;
}	