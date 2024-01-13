/*
A pair of (arr[i], arr[j]) is called an inversion when
i < j and arr[i] > arr[j]
*/
#include <bits/stdc++.h>
using namespace std;

// Naive solution
// Time complexity is big O(n^2)
int countInversion(int arr[], int n){
	int res = 0;
	for(int i=0; i<(n-1); i++){
		for(int j=i+1; j<n; j++){
			if(arr[i] > arr[j]){
				res++;
			}
		}
	}
	return res;
}

int countandMerge(int arr[], int low, int mid, int high){
	// low <= mid < high
	int m = mid-low+1, n = high-mid;
	int left[m], right[n];

	for(int i=0; i<m; i++){
		left[i] = arr[low+i];
	}
	for(int i=0; i<n; i++){
		right[i] = arr[mid+1+i];
	}

	int i=low, j=0, k=0, res = 0;
	while(j<m && k<n){
		if(left[j] <= right[k]){
			arr[i] = left[j];
			i++;
			j++;
		}
		else{
			res = res + (m - j);
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
	return res;
}

// Efficient solution
// Time complexity is big O(nlog(n))
// Auxiliary space is big O(n)
int _countInversion(int arr[], int left, int right){
	int res = 0;
	if(left<right){
		int mid = left + (right-left)/2;
		res += _countInversion(arr, left, mid);
		res += _countInversion(arr, mid+1, right);
		res += countandMerge(arr, left, mid, right);
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {2, 4, 1, 3, 5};
	cout << countInversion(arr, 5) << endl;
	cout << _countInversion(arr, 0, 4) << endl;
	
	return 0;
}	 