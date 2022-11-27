#include <bits/stdc++.h>
using namespace std;

// Naive Solution
// Time complexity is big O(n)
// int power(int x, int n){
// 	int res = 1;
// 	for(int i=0;i<n;i++){
// 		res *= x;
// 	}
// 	return res;
// }

// Efficient Solution using recursion
/*
power(x, n) = { if n is even -> power(x, n/2)*power(x, n/2)
			    else -> power(x, n-1)*x
			  }
*/
// Time complexity is big O(log(n))
// int power(int x, int n){
// 	if(n==0){
// 		return 1;
// 	}
// 	int temp = power(x, n/2);
// 	temp = temp*temp;
// 	if(n%2==0){
// 		return temp;
// 	}
// 	else{
// 		return temp*x;
// 	}
// }
// Iterative Power(Binary Exponentiation)
// ** Every number can be written as sum of power of 2(set bits in binary representation)
// ** We can traverse through all bits of a number(from LSB to MSB) in O(log(n))
/*
While(n>0){
	if(n%2!=0){
		bit is 1
	}
	else{
		bit is 0
	}
	n = n/2;
}
*/
// Time complexity is big O(log(n))
// Aux space is big O(1)
// It is better than recursive solution
int power(int x, int n){
	int res = 1;
	while(n>0){
		// Using bitwise and
		// if(n&1)
		if(n%2 != 0){
			res = res*x;
			// res = (res*x)%M;
		}
		x = x*x;
		// Bitwise right shift operator
		// n = n>>1
		n = n/2;
	}
	return res;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout << power(3, 5) << endl;

	return 0;
}	