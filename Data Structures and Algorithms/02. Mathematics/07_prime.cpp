#include <bits/stdc++.h>
using namespace std;

// Naive Solution
// Time Complexity is big O(n)
// int isPrime(int n){
// 	if(n==1){
// 		return 0;
// 	}
// 	if(n==2){
// 		return 1;
// 	}
// 	for(int i=2;i*i<=n;i++){
// 		if(n%i==0){
// 			return 0;
// 		}
// 	}
// 	return 1;
// }
// Making it efficient
int isPrime(int n){
	if(n==1){
		return 0;
	}
	if(n==2 || n==3){
		return 1;
	}
	if(n%2==0 || n%3==0){
		return 0;
	}
	for(int i=5;i*i<=n;i+=6){
		if(n%i==0 || n%(i+2)==0){
			return 0;
		}
	}
	return 1;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout << isPrime(107) << endl;

	return 0;
}	