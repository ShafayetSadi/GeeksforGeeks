/*
Bubble sort consists of n rounds. On each round, the algorithm iterates
through the elements of the array. Whenever two consecutive elements are found
that are not in correct order, the algorithm swaps them.
It is a stable sort algorithm.
*/
#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}cout << endl;
}

// Time complexity is big O(n^2)
void bubbleSort(int arr[], int n){
	for(int i=0; i<(n-1); i++){
		for(int j=0; j<(n-1-i); j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
}

// An optimization
void _bubbleSort(int arr[], int n){
	for(int i=0; i<(n-1); i++){
		bool swapped = false;
		for(int j=0; j<(n-1-i); j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				swapped = true;
			}
		}
		if(swapped == false){
			break;
		}
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
	
	bubbleSort(arr, n);
	print(arr, n);

	_bubbleSort(arr, n);
	print(arr, n);

	return 0;
}	