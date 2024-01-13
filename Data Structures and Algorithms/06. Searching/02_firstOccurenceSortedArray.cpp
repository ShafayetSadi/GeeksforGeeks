#include <bits/stdc++.h>
using namespace std;

// Naive way is to use linear search
// Time complexity is big O(n)

// Efficient way is to use binary search
// Time complexity is big O(log(n))
// Auxiliary space is big O(log(n))
int firstBinarySearch(int arr[], int n, int x, int left, int right){
	int mid = (left+right)/2;
	if(left > right){
		return -1;
	}
	if(arr[mid] == x){
		if(mid!=0 && arr[mid-1]==x){
			return firstBinarySearch(arr, n, x, left, mid-1);
		}
		return mid;
	}
	if(arr[mid] > x){
		return firstBinarySearch(arr, n, x, left, mid-1);
	}
	else{
		return firstBinarySearch(arr, n, x, mid+1, right);
	}
}

// Time complexity is big O(log(n))
// Auxiliary space is big O(1)
int _firstBinarySearch(int arr[], int n, int x){
	int left = 0;
	int right = n-1;
	while(left <= right){
		int mid = (left+right)/2;
		if(arr[mid]==x){
			if(mid!=0 && arr[mid-1]==x){
				right = mid-1;
				continue;
			}
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


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 10, 10, 10, 20, 20, 40};
	int x = 10;
	cout << firstBinarySearch(arr, 7, x, 0, 6) << endl;
	cout << _firstBinarySearch(arr, 7, x) << endl;

	return 0;
}	