#include <bits/stdc++.h>
using namespace std;

// Naive Solution
// Time Complexity is big O(min(n, m))
// int gcd(int n, int m){
// 	// int ans = 1;
// 	// int mn = min(n, m);
// 	// for(int i=1;i<=mn;i++){
// 	// 	if(n%i==0 && m%i==0){
// 	// 		ans = i;
// 	// 	}
// 	// }
// 	// return ans;
// 	int res = min(n, m);
// 	while(res>0){
// 		if(n%res==0 && m%res==0){
// 			break;
// 		}
// 		res--;
// 	}
// 	return res;
// }

// Another way
// int gcd(int n, int m){
// 	int res = 1;
	
// 	int i = 2;
// 	while(n>1 && m>1){
// 		if(n%i==0 && m%i==0){
// 			res *= i;
// 			n /= i;
// 			m /= i;
// 		}
// 		else{
// 			i++;
// 		}
// 	}
// 	return res;
// }

// Euclidean Algorithm
// Let a>b
// gcd(a, b) == gcd(a-b, b)
// int gcd(int a,int b){
// 	while(a != b){
// 		if(a>b){
// 			a = a-b;
// 		}
// 		else{
// 			b = b-a;
// 		}
// 	}
// 	return a;
// }
// More optimized way
// Time Complexity is big O(log(min(a, b)))
int gcd(int a, int b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b, a%b);
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << gcd(100, 20) << endl;
	return 0;
}	