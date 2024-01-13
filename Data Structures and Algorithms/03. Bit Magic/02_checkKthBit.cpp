#include <bits/stdc++.h>
using namespace std;

// Using left shift
// int checkIthBit(int x, int i){
// 	int mask = (1<<(i-1));

// 	// if((x&mask) > 0){
// 	// 	return 1;
// 	// }else{
// 	// 	return 0;
// 	// }
// 	// return (x & mask) > 0 ? 1 : 0;
// 	return (x & mask) > 0;
// }

// Using right shift
int checkIthBit(int x, int i){
	x = (x >> (i-1));
	return (x & 1);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k;
	n = 5;
	k = 1;
	int flag = checkIthBit(n, k);
	cout << flag << endl;

	if(flag){
		cout << "bit is set\n";
	}
	else{
		cout << "bit is not set\n";
	}

	return 0;
}	