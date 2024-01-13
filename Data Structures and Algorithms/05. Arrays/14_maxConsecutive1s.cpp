// Maximum consecutive 1's in a Binary array
#include <bits/stdc++.h>
using namespace std;

// Time complexity is big O(n)
int maxConsecutive1s(int arr[], int n){
	int res = 0;
	int count = 0;
	for(int i=0; i<n; i++){
		if(arr[i]==0){
			res = max(res, count);
			count = 0;
		}
		else{
			count++;
		}
	}
	res = max(res, count);
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr1[] = {0, 1, 1, 0, 1, 0};
	cout << maxConsecutive1s(arr1, 6) << endl;

	int arr2[] = {0, 0, 0, 0, 0, 0};
	cout << maxConsecutive1s(arr2, 6) << endl;

	int arr3[] = {1, 1, 1, 1, 1, 1};
	cout << maxConsecutive1s(arr3, 6) << endl;

	int arr4[] = {1, 0, 1, 1, 1, 1, 0, 1, 1};
	cout << maxConsecutive1s(arr4, 9) << endl;
	
	return 0;
}	