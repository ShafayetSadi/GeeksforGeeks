#include <bits/stdc++.h>
using namespace std;

// Naive Solution
// Time Complexity is big O(n)
// void printDivisors(int n){
// 	for(int i=1; i<=n; i++){
// 		if(n%i==0){
// 			cout << i << " ";
// 		}
// 	}
// }
// Efficient Solution but not sorted
// void printDivisors(int n){
// 	for(int i=1; i*i<=n; i++){
// 		if(n%i==0){
// 			cout << i << " ";
// 			if(i != n/i){
// 				cout << (n/i) << " ";
// 			}
// 		}
// 	}
// }
// Sorted Efficient solution
void printDivisors(int n){
	int i;
	for(i=1; i*i<n; i++){
		if(n%i==0){
			cout << i << " ";
		}
	}
	for( ; i>=1; i--){
		if(n%i==0){
			cout << (n/i) << " ";
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	printDivisors(100);

	return 0;
}	