#include <bits/stdc++.h>
using namespace std;

// Naive solution
// Time Complexity is big O(total bits)
// int countSetBits(int n){
// 	int res = 0;
// 	while(n>0){
// 		// if(n%2 != 0){
// 		// 	res++;
// 		// }
// 		// n = n/2;

// 		// if(n&1){
// 		// 	res++;
// 		// }
// 		res = res + (n&1);
// 		n = (n>>1);
// 	}
// 	return res;
// }

// Brian Kerningam's Algorithm
// Time Complexity is big O(set bits)
int countSetBits(int n){
	int res = 0;
	while(n>0){
		n = (n & (n-1));
		res++;
	}
	return res;
}

// Lookup Table Method for 32 bit number
// Time Complexity is big O(1)
int table[256];

void intialize(){
	table[0] = 0;
	for(int i=1; i<256; i++){
		// See naive solution to understand this
		table[i] = (i&1) + table[i/2];
	}
}

int count(int n){
	intialize();
	int res = table[n & 0xff];
	n = n >> 8;
	res += table[n & 0xff];
	n = n >> 8;
	res += table[n & 0xff];
	n = n >> 8;
	res += table[n & 0xff];
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n = 12546723;
	cout << countSetBits(n) << endl;
	cout << count(n) << endl;

	cout << 0xff << endl;

	return 0;
}	