#include <bits/stdc++.h>
using namespace std;

int maxGuest(int arr[], int dep[], int n){
	sort(arr, arr+n);
	sort(dep, dep+n);
	int i=1;
	int j=0;
	int res = 1;
	int curr = 1;
	while(i<n && j<n){
		if(arr[i] < dep[j]){
			curr++;
			i++;
		}
		else{
			curr--;
			j++;
		}
		res = max(res, curr);
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arrival[] = {900, 940, 950, 1100, 1500, 1800};
	int departure[] = {910, 1200, 1120, 1130, 1900, 2000};
	int n = 6;

	cout << maxGuest(arrival, departure, n);

	return 0;
}	