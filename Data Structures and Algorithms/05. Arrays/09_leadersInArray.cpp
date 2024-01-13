#include <bits/stdc++.h>
using namespace std;

// Naive solution is to run 2-d loop to check for every element if
// it is the largest to its next elements
// Time Complexity is big O(n^2)

// Efficient solution
// Time complexity is big O(n)
void leaders(int arr[], int n){
	int curr_lead = arr[n-1];
	cout << curr_lead << " ";
	for(int i=n-2; i>=0; i--){
		if(curr_lead < arr[i]){
			curr_lead = arr[i];
			cout << curr_lead << " ";
		}
	}
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {7, 10, 4, 10, 6, 5, 2};
	leaders(arr, 7);

	return 0;
}	