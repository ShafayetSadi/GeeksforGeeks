#include <bits/stdc++.h>
using namespace std;

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
// Naive Solution
// Time Complexity is big O(n*sqrt(n))
void printPrimes(int n){
	for(int i=2; i<=n; i++){
		if(isPrime(i)){
			cout << i << " ";
		}
	}
}

// Simple implementation of Sieve
// void sieve(int n){
// 	vector<bool> Prime(n+1, true);
// 	for(int i=2; i*i<=n; i++){
// 		if(Prime[i]){
// 			for(int j=2*i; j<=n; j += i){
// 				Prime[j] = false;
// 			}
// 		}
// 	}
// 	for(int i=2; i<=n; i++){
// 		if(Prime[i]){
// 			cout << i << " ";
// 		}
// 	}
// }
// Simple optimization in Sieve
// void sieve(int n){
// 	vector<bool> Prime(n+1, true);
// 	for(int i=2; i*i<=n; i++){
// 		if(Prime[i]){
// 			// Replaced 2*i with i*i
// 			for(int j=i*i; j<=n; j += i){
// 				Prime[j] = false;
// 			}
// 		}
// 	}
// 	for(int i=2; i<=n; i++){
// 		if(Prime[i]){
// 			cout << i << " ";
// 		}
// 	}
// }
// Final Optimized way
// Time Complexity is big O(nloglog(n))
void sieve(int n){
	vector<bool> prime(n+1, true);
	for(int i=2; i<=n; i++){ 
		if(prime[i]){                                                                                
			cout << i << " ";
			for(int j=i*i; j<=n; j+=i){
				prime[j] = false;
			}
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	printPrimes(100);
	cout << endl;
	sieve(100);
	return 0;
}	