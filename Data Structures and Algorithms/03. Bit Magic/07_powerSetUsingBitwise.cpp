#include <bits/stdc++.h>
using namespace std;

// Time Complexity is big O((2^n)*n)
void printPowerSet(string str){
	int n = str.length();
	int powSize = pow(2, n);
	for(int counter=0; counter<powSize; counter++){
		for(int j=0; j<n; j++){
			if((counter & (1<<j)) != 0){
				cout << str[j];
			}
		}
		cout << endl;
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	printPowerSet("Sad");

	return 0;
}	