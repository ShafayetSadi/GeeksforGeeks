#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// It uses IntroSort
	// Time complexity is big O(nlog(n))
	int arr[] = {10, 20, 5, 7};
	int n = 4;
	print(arr, n);

	sort(arr, arr+n);
	print(arr, n);

	sort(arr, arr+n, greater<int>());
	print(arr, n);


	return 0;
}	

// Stability in Sorting Algorithm
// Buble sort, Insertion sort, Merge sort are stable sorts
// Selection sort, Quick sort, Heap sort are unstable sorts