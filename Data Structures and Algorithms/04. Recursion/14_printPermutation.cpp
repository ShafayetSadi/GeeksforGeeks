#include <bits/stdc++.h>
using namespace std;

void permute(string s, int i=0){
	if(i==s.length()-1){
		cout << s << "\n";
		return;
	}
	for(int j=i; j<s.length(); j++){
		swap(s[i], s[j]);
		permute(s, i+1);
		swap(s[j], s[i]);
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	string str = "ABC";
	permute(str);

	return 0;
}	