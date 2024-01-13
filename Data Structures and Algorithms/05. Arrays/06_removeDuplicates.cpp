// We have sorted array
#include <bits/stdc++.h>
using namespace std;

// Naive way it to create a temporary array with the distinct element
// Then copy the temp array into the main array and return new n
// it requires O(n) time and space complexity

// Efficient way
// its space complexity is big O(1) but time complexity is same
int removeDuplicates(int arr[], int n){
	int index = 1;
	for(int i=1; i<n; i++){
		if(arr[i] != arr[index-1]){
			arr[index] = arr[i];
			index++;
		}
	}
	return index;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {10, 20, 20, 30, 30, 30, 30};
	int n = 7;
	n = removeDuplicates(arr, n);

	cout << n << endl;
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}cout << endl;

	int arr1[] = {10, 10, 10, 10};
	n = removeDuplicates(arr1, 4);

	cout << n << endl;
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}cout << endl;

	return 0;
}	