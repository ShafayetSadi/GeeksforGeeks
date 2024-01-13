#include <bits/stdc++.h>
using namespace std;

int reverseArray(int arr[], int n){
	int start = 0;
	int end = n-1;
	while(start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--; 
	}
}

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
	
	int arr[] = {10, 5, 7, 30};
	int n = 4;
	print(arr, n);
	reverseArray(arr, n);
	print(arr, n);

	return 0;
}	