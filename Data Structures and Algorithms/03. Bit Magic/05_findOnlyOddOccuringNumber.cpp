#include <bits/stdc++.h>
using namespace std;

// Naive solution
// Time Complexity is big O(n^2)
// int oddOccuring(int arr[], int n){
// 	for(int i=0; i<n; i++){
// 		int count = 0;
// 		for(int j=0; j<n; j++){
// 			if(arr[i]==arr[j]){
// 				count++;
// 			}
// 		}
// 		if(count%2!=0){
// 			return arr[i];
// 		}
// 	}
// 	return 0;
// }

// More efficient way
// x^0 = x
// x^x = 0
// x^y = y^x
// x^(y^z) = (x^y)^z
// Time Complexity is big O(n)
int oddOccuring(int arr[], int n){
	int res = 0;
	for(int i=0; i<n; i++){
		res = res^arr[i];
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {4, 3, 4, 4, 4, 5, 5};
	cout << oddOccuring(arr, 7) << endl;
	return 0;
}	