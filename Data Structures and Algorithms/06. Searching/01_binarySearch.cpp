#include <bits/stdc++.h>
using namespace std;


// Iterative way
// Time complexity is big O(log(n))
// Auxiliary space is big O(1)
int binarySearch(int arr[], int n, int x){
	int left = 0;
	int right = n-1;
	while(left <= right){
		int mid = (left+right)/2;
		if(arr[mid]==x){
			return mid;
		}
		else if(arr[mid] > x){
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	return -1;
}

// Recursive way
// Time complexity is big O(log(n))
// Auxiliary space is big O(log(n))
int _binarySearch(int arr[], int n, int x, int left, int right){
	int mid = (left+right)/2;
	if(left > right){
		return -1;
	}
	if(arr[mid] == x){
		return mid;
	}
	if(arr[mid] > x){
		return _binarySearch(arr, n, x, left, mid-1);
	}
	else{
		return _binarySearch(arr, n, x, mid+1, right);
	}
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {10, 20, 30, 40, 50, 60};
	int n = 6;
	int x = 25;
	
	cout << binarySearch(arr, n, x) << endl;
	cout << _binarySearch(arr, n, x, 0, 5) << endl;
	
	return 0;
}	