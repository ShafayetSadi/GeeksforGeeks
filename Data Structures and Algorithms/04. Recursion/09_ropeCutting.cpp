#include <bits/stdc++.h>
using namespace std;

int ropeCutting(int n, int a, int b, int c){
	if(n==0){
		return 0;
	}
	if(n < 0){
		return -1;
	}
	int res = max(ropeCutting(n-a, a, b, c), max(ropeCutting(n-b, a, b, c), ropeCutting(n-c, a, b, c)));
	if(res == -1){
		return -1;
	}
	return res + 1;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n = 23;
	int a = 11, b = 9, c = 12;

	cout << ropeCutting(n, a, b, c) << endl;

	cout << ropeCutting(5, 2, 5, 1) << endl;

	cout << ropeCutting(5, 4, 2, 6) << endl;
	cout << ropeCutting(9, 2, 2, 2) << endl;

	return 0;
}	