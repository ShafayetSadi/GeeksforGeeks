#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
	if(n==0){
		return 1;
	}
	return (n * factorial(n-1));
}

// Naive Method
int trailingZeros(int n){
	int count = 0;
	while(n%10==0){
		n = n/10;
		count++;
	}
	return count;
}

// Efficient Solution
/*
   TrailingZeros = (n/5) + (n/25) + (n/125) + . . . .
   Time Complexity is big O(log(n))
*/
int factZeros(int n){
	int count = 0;
	// while(n>=5){
	// 	n = n/5;
	// 	count += n;
	// }
	for(int i=5; i<=n; i=i*5){
		count += n/i;
	}
	return count;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << trailingZeros(50040000) << endl;
	cout << trailingZeros(factorial(10)) << endl;
	cout << factZeros(100) << endl;
	return 0;
}	