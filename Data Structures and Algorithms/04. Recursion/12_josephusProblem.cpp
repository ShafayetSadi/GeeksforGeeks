/*
Given the total number of persons n and
a number k which indicates that k-1 persons are skipped and
kth person is killed in circle in a fixed direction.

The task is to choose the safe place in the circle so that 
when you perform these operations starting from 1st place in the circle,
you are the last one remaining and survive. 
*/
#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k){
	if(n == 1){
		return 0;
	}
	else{
		return (k + josephus(n-1, k))%n;
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n = 3;
	int k = 2;
	cout << josephus(n, k) << endl;

	return 0;
}	