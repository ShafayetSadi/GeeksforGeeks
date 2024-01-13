#include <bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n){
	int count = 1;
	for(int i=1; i<n; i++){
		if(arr[i] != arr[i-1]){
			cout << arr[i-1] << " " << count << endl;
			count = 0;
		}
		count++;
		if(i==n-1){
			cout << arr[i] << " " << count << endl;
		}
	}
}

void _frequency(int arr[], int n){
	int freq = 1;
	int i = 1;
	while(i<n){
		while(i<n && arr[i]==arr[i-1]){
			freq++;
			i++;
		}
		cout << arr[i-1] << " " << freq << endl;
		i++;
		freq = 1;
	}
	if(n==1 || arr[n-1] != arr[n-2]){
		cout << arr[i-1] << " " << freq << endl;
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {10, 10, 10, 25, 30, 30};
	int n = 6;
	frequency(arr, n);
	_frequency(arr, n);
	cout << endl;

	int arr1[] = {10, 10, 10, 10};
	n = 4;
	frequency(arr1, n);
	_frequency(arr1, n);
	cout << endl;

	int arr2[] = {10, 20, 30};
	n = 3;
	frequency(arr2, n);
	cout << endl;

	int arr3[] = {40, 50, 50, 50};
	n = 4;
	frequency(arr3, n);
	cout << endl;

	return 0;
}	