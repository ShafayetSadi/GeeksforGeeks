/*
Generate all the subsets of a string or subsequences of a string.
For a string of length n, there are going to be 2^n subsets.
*/

#include <bits/stdc++.h>
using namespace std;

// Time complexity is big O(2^n)
void generateSubset(string str, string curr="", int index=0){
	if(index == str.length()){
		cout << curr << " ";
		return;
	}
	generateSubset(str, curr, index+1);
	curr += str[index];
	generateSubset(str, curr, index+1);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	string str = "ABC";
	// generateSubset(str, "", 0);
	generateSubset(str);

	return 0;
}	