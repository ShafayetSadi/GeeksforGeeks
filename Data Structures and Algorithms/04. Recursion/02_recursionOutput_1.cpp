#include <bits/stdc++.h>
using namespace std;

void fun1(int n)
{
	if(n == 0)
		return;
	cout<<n<<endl;
	fun1(n - 1);
	cout<<n<<endl;
}

void fun(int n)
{
	if(n == 0)
		return;
	fun(n - 1);
	cout<<n<<endl;
	fun(n - 1);
}

// This function returns log(n) of base 2
// for base 3 functionality, we have to use (n < 3) and (n/3) 
int fun2(int n)
{
	if(n == 1)
		return 0;
	else
		return 1 + fun2(n / 2);
}

void binary(int n)
{
	if(n == 0)
		return;
	binary(n / 2);
	cout<<(n % 2);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	fun1(3);
	cout << endl;
	fun(3);
	cout << endl;
	cout << fun2(16) << endl;
	cout << endl;
	binary(7);
	cout << endl;

	return 0;
}	