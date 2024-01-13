#include <bits/stdc++.h>
using namespace std;

// Naive solution
// Time Complexity is big O(n^2)
// void oddOccuring(int arr[], int n){
// 	for(int i=0; i<n; i++){
// 		int count = 0;
// 		for(int j=0; j<n; j++){
// 			if(arr[i]==arr[j]){
// 				count++;
// 			}
// 		}
// 		if(count%2!=0){
// 			cout << arr[i] << endl;
// 		}
// 	}
// }

// More efficient way
// x^0 = x
// x^x = 0
// x^y = y^x
// x^(y^z) = (x^y)^z
// Time Complexity is big O(n)
void oddOccuring(int arr[], int n){
	int XOR = 0;
	int res1 = 0, res2 = 0;
	for(int i=0; i<n; i++){
		XOR = XOR^arr[i]; 
	}
	// Now XOR is 5^6 = 3
	// Use a notepad to understand this
	int sn = XOR & ~(XOR-1); // Rightmost set bit

	for(int i=0; i<n; i++){
		if((arr[i] & sn) != 0){
			res1 = res1 ^ arr[i];
		}
		else{
			res2 = res2 ^ arr[i];
		}
	}
	cout << res1 << " " << res2 << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {3, 4, 3, 4, 5, 4, 4, 6, 7, 7};
	oddOccuring(arr, 10);
	return 0;
}	

