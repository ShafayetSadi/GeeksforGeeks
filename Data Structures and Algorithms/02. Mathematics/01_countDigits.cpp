#include <bits/stdc++.h>
using namespace std;

// Iterative Solution
// int countDigit(int n){
// 	int count = 0;
// 	while(n!=0){
// 		n = n/10;
// 		count++;
// 	}
// 	return count;
// }

// Recursive Solution
// int countDigit(int n){
// 	if(n==0){
// 		return 0;
// 	}
// 	return (1+countDigit(n/10));
// }

// Logarithmic Solution
int countDigit(int n){
	return floor(log10(n)+1);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout << countDigit(123456) << endl;
	return 0;
}	