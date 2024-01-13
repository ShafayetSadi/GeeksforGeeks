/*
Selection sort finds the minimum or maximum element in the array and swap that 
with the first or last element.
Selection sort does less memory writes compared to quicksort, mergesort,
insertionsort etc. But Cycle sort is optimal in terms of memory writes.
It is the basic idea for Heap Sort.
It is not a stable sort algorithm.
It is an in-place algorithm.
Time complexity is big O(n^2).

*/
#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}cout << endl;
}

void selectionSort(int arr[], int n){
	for(int i=0; i<(n-1); i++){
		int minIndex = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {7, 3, 5, 6, 2, 4, 1};
	int n = 7;
	print(arr, n);
	
	selectionSort(arr, n);
	print(arr, n);

	selectionSort(arr, n);
	print(arr, n);

	return 0;
}	