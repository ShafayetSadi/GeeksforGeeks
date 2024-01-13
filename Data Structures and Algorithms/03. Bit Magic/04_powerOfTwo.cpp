#include <bits/stdc++.h>
using namespace std;

// Naive Solution
// bool isPow2(int n){
// 	if(n==0){
// 		return false;
// 	}
// 	while(n!=1){
// 		if(n%2 != 0){
// 			return false;
// 		}
// 		n = n/2;
// 	}
// 	return true;
// }
// We can use Brian Kerningam's Algorithm to check number of 
// set bits. If it is one -> return true
// Because every power of 2 has only one set bit
// We can use another way
bool isPow2(int n){
	if(n==0){
		return false;
	}
	return (n & (n-1)) == 0;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout << isPow2(16) << endl;
	cout << isPow2(10) << endl;

	return 0;
}	



