#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
	int rev = 0;
	int temp = n;
	while(temp!=0){
		rev = rev*10+(temp%10);
		temp /= 10;
	}
	return (rev == n);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout << isPalindrome(8668) << endl;
	cout << isPalindrome(8667) << endl;

	return 0;
}	