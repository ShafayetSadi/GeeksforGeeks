#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b, a%b);
	}
}

// Naive Solution
// int lcm(int a,int b){
// 	int i = max(a, b);
// 	for(i; i<=a*b; i++){
// 		if(i%a==0 && i%b==0){
// 			return i;
// 		}
// 	}
// 	return i;
// }

// A Efficient Solution
// a*b = gcd(a, b)*lcm(a, b)
// Time Complexity is big O(log(min(a, b)))
int lcm(int a, int b){
	return ((a*b)/gcd(a, b));
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout << lcm(4, 6) << endl;

	return 0;
}	