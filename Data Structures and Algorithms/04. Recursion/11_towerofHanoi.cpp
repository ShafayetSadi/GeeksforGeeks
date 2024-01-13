/*
We have three tower. One tower have n disks of different sizes.
We have to move these disks from tower A to tower C in same order.
We can use tower B as auxiliary space.
Rules:
1. Only one disks move at a time.
2. No larger disks above smaller.
3. Only the top disk of a tower can be moved.
*/
#include <bits/stdc++.h>
using namespace std;

int towerofHanoi(int n){
	if(n==1){
		return 1;
	}
	return towerofHanoi(n-1)*2 + 1;
}

void _towerofHanoi(int n, char towerA, char towerB, char towerC){
	// here first pamameter is source, second parameter is auxiliary space,
	// and third parameter is destination
	if(n==1){
		cout << "Move 1 from " << towerA << " to " << towerC << endl;
		return;
	}
	_towerofHanoi(n-1, towerA, towerC, towerB);
	cout << "Move " << n << " from " << towerA << " to " << towerC << endl;
	_towerofHanoi(n-1, towerB, towerA, towerC);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n = 5;
	cout << (pow(2, n)-1) << endl;
	cout << towerofHanoi(n) << endl;
	_towerofHanoi(n, 'A', 'B', 'C');

	for(int i=1; i<=10; i++){
		cout << i << " " << towerofHanoi(i) << endl;
	}

	return 0;
}	