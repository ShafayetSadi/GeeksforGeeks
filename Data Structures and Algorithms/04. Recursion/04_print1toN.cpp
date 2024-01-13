#include <bits/stdc++.h>
using namespace std;

void fun(int n){
	if(n==0){
		return;
	}
	fun(n-1);
	cout << n << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	fun(5);

	return 0;
}	