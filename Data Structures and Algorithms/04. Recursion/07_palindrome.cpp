#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
	int len = str.length();
	if(len==1){
		return true;
	}
	if(len==2){
		return str[0]&&str[1];
	}
	if(str[0] != str[len-1]){
		return false;
	}
	string s = str.substr(1, len-2);
	return isPalindrome(s);

}

bool _isPalindrome(string str, int start, int end)
{
	if(start >= end)
		return true;

	return ((str[start]==str[end]) && 
		     _isPalindrome(str, start + 1, end - 1));
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout << "Hola" << endl;
	cout << isPalindrome("GeekskeeG") << endl;
	cout << _isPalindrome("GeekskeeG", 0, 8) << endl;
	return 0;
}	