/*
Merge sort is a divide and conquer algorithm.
It is a stable sort algorithm.
Time complexity is big O(nlog(n)) and auxiliary space is O(n).
Well suited for linked lists. Works in O(1) aux. space.
Used in external sorting.
In general for arrays, quicksort outperforms megresort.
*/
#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}cout << endl;
}

// Time complexity is big O(m+n)
// Auxiliary space is also big O(m+n)
void merge(int arr[], int low, int mid, int high){
	// low <= mid < high
	int m = mid-low+1, n = high-mid;
	int left[m], right[n];

	for(int i=0; i<m; i++){
		left[i] = arr[low+i];
	}
	for(int i=0; i<n; i++){
		right[i] = arr[mid+1+i];
	}

	int i=low, j=0, k=0;
	while(j<m && k<n){
		if(left[j] <= right[k]){
			arr[i] = left[j];
			i++;
			j++;
		}
		else{
			arr[i] = right[k];
			i++;
			k++;
		}
	}
	while(j<m){
		arr[i] = left[j];
		i++;
		j++;
	}
	while(k<n){
		arr[i] = right[k];
		i++;
		k++;
	}
}

void mergeSort(int arr[], int left, int right){
	// At least 2 elements is required
	if(right>left){
		// int mid = left + (right-left)/2; // it is same as (l+r)/2
		int mid = (left+right)/2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid+1, right);
		merge(arr, left, mid, right);
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {10, 15, 20, 40, 8, 11, 55};
	print(arr, 7);
	merge(arr, 0, 3, 6);
	print(arr, 7);

	int arr1[] = {10, 5, 30, 15, 7};
	print(arr1, 5);
	mergeSort(arr1, 0, 4);
	print(arr1, 5);


	return 0;
}	