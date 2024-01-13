#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
	if(n < 10){
		return n;
	}
	int last = n%10;
	return last + sumOfDigits(n/10);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout << sumOfDigits(46453) << endl;
	cout << sumOfDigits(253) << endl;
	cout << sumOfDigits(10) << endl;
	cout << sumOfDigits(11) << endl;

	return 0;
}	