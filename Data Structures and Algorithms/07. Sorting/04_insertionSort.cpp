/*
Insertion sort is a sorting algorithm that places an unsorted element 
at its suitable place in each iteration.
Insertion sort works similarly as we sort cards in our hand in a card game.
We assume that the first card is already sorted then, we select an 
unsorted card. If the unsorted card is greater than the card in hand,
it is placed on the right otherwise, to the left. In the same way, 
other unsorted cards are taken and put in their right place.

Insertion sort is most popular for small sized arrays.
It is a stable sort algorithm.
It is an in-place algorithm.
Time complexity is big O(n^2) in worst case and big O(n) in best case(when 
array is sorted already).
In general it is big O(n^2).
*/
#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}cout << endl;
}

void insertionSort(int arr[], int n){
	for(int i=1; i<n; i++){
		int key = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
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
	
	insertionSort(arr, n);
	print(arr, n);

	insertionSort(arr, n);
	print(arr, n);

	return 0;
}	