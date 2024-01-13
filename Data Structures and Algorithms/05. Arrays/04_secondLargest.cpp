#include <bits/stdc++.h>
using namespace std;

// Naive solution
int secondLargest(int arr[], int n){
	int mx = arr[0];
	for(int i=1; i<n; i++){
		mx = max(mx, arr[i]);
	}
	int ans = -1;
	for(int i=0; i<n; i++){
		if(arr[i]!=mx){
			ans = max(ans, arr[i]);
		}
	}
	return ans;
}
// Naive solution
int indexSecondLargest(int arr[], int n){
	int largest = 0;
	for(int i=1; i<n; i++){
		if(arr[i] > arr[largest]){
			largest = i;
		}
	}
	int ans = -1;
	for(int i=0; i<n; i++){
		if(arr[i]!=arr[largest]){
			if(ans==-1){
				ans = i;
			}
			else if(arr[i] > arr[ans]){
				ans = i;
			}
		}
	}
	return ans;
}

// Efficient solution
int _secondLargest(int arr[], int n){
	int largest = 0;
	int ans = -1;
	for(int i=1; i<n; i++){
		if(arr[i] > arr[largest]){
			ans = largest;
			largest = i;
		}
		else if(arr[i] != arr[largest]){
			if(ans==-1 || arr[i] > arr[ans]){
				ans = i;
			}
		}
	}
	return ans;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {10, 5, 8, 20};
	int n = 4;
	cout << secondLargest(arr, n) << endl;
	cout << indexSecondLargest(arr, n) << endl;
	cout << _secondLargest(arr, n) << endl;

	cout << endl;

	int arr1[] = {10, 10, 10, 10};
	cout << secondLargest(arr1, n) << endl;
	cout << indexSecondLargest(arr1, n) << endl;
	cout << _secondLargest(arr1, n) << endl;

	cout << endl;

	int arr2[] = {10, 40, 30, 20};
	cout << secondLargest(arr2, n) << endl;
	cout << indexSecondLargest(arr2, n) << endl;
	cout << _secondLargest(arr2, n) << endl;

	return 0;
}	