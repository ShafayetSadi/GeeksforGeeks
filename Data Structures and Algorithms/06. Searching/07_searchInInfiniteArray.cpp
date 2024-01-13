#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int element, int low, int high){

}

// Naive solution
// O(pos) time
// O(1) space
int search(int arr[], int x){
	int i=0;
	while(true){
		if(arr[i] == x) return i;
		if(arr[i] > x) return -1;
		i++;
	}
}

// Efficient solution
// O(log(pos))
int _search(int arr[], int x){
	if(arr[0]==x) return 0;
	int i = 1;
	while(arr[i] < x){
		i = i*2;
	}
	if(arr[i]==x) return i;
	return binary_search(arr, x, i/2+1, i-1);
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char s[16];
	cin >> s;
	char x[] = "Hello,World!";
	cout << strcmp(s, x) << endl;
	return 0;
}	