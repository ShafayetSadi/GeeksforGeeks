#include <bits/stdc++.h>
using namespace std;

// Naive
int getLargest(int arr[], int n){
	for(int i=0; i<n; i++){
		bool flag = true;
		for(int j=0; j<n; j++){
			if(arr[j] > arr[i]){
				flag = false;
				break;
			}
		}
		if(flag==true){
			return i;
		}
	}
	return -1;
}

// More efficient
int _getLargest(int arr[], int n){
	// pair<int, int> p = {arr[0], 0};
	// for(int i=1; i<n; i++){
	// 	if(arr[i] > p.first){
	// 		p = {arr[i], i};
	// 	}
	// }
	// return p.second;
	int res = 0;
	for(int i=1; i<n; i++){
		if(arr[i] > arr[res]){
			res = i;
		}
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {5, 8, 20, 10};
	int n = 4;
	cout << getLargest(arr, n) << endl;
	cout << _getLargest(arr, n) << endl;

	return 0;
}	