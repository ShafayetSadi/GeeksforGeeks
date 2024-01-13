#include <bits/stdc++.h>
using namespace std;

int getSum(int n)
{
	if(n == 0)
		return 0;
	return n + getSum(n - 1);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	cout << getSum(5) << endl;

	return 0;
}	