#include <bits/stdc++.h>
using namespace std;

// Iterative Solution
// int factorial(int n){
// 	int res = 1;
// 	for(int i=2;i<=n;i++){
// 		res *= i;
// 	}
// 	return res;
// }

// Iterative Solution
int factorial(int n){
	if(n==0){
		return 1;
	}
	return (n * factorial(n-1));
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout << factorial(4) << endl;
	cout << factorial(5) << endl;

	return 0;
}	