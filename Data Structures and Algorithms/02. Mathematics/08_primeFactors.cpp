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
// Time Complexity is big O(n^2log(n))
void primeFactors(int n){
	for(int i=2; i<n; i++){
		if(isPrime(i)){
			int x = i;
			while(n%x==0){
				cout << i << " ";
				x = x*i;
			}
		}
	}
}

// Efficient Solution
// void printPrimeFactors(int n){
// 	if(n<=1) return;
// 	for(int i=2; i*i<=n; i++){
// 		while(n%i==0){
// 			cout << i << " ";
// 			n = n/i;
// 		}
// 	}
// 	if(n>1){
// 		cout << (n) << endl;
// 	}
// }
// Further Optimization
void printPrimeFactors(int n){
	if(n<=1) return;
	while(n%2==0){
		cout << 2 << " ";
		n = n/2;
	}
	while(n%3==0){
		cout << 3 << " ";
		n = n/3;
	}
	for(int i=5; i*i<=n; i+=6){
		while(n%i==0){
			cout << i << " ";
			n = n/i;
		}
		while(n%(i+2)==0){
			cout << (i+2) << " ";
			n = n/(i+2);
		}
	}
	if(n>3){
		cout << (n) << endl;
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	primeFactors(156446);
	cout << endl;
	printPrimeFactors(156446);
	return 0;
}	