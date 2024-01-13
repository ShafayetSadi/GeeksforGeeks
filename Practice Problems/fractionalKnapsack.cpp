#include <bits/stdc++.h>
using namespace std;

bool myCmp(pair<int, int> a, pair<int, int> b){
	double r1 = (double)a.first/a.second;
	double r2 = (double)b.first/b.second;
	return r1>r2;
}

// Time Complexity is big O(nlog(n))
double fractionalKnapsack(int w, pair<int, int> arr[], int n){
	sort(arr, arr+n, myCmp);
	double res = 0.0;
	for(int i=0; i<n; i++){
		if(arr[i].second <= w){
			res += arr[i].first;
			w = w - arr[i].second;
		}
		else{
			res += arr[i].first*(double)w/arr[i].second;
			break;
		}
	}
	return res;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, w;
	cin >> n >> w;
	pair<int, int> arr[n];
	for(int i=0; i<n; i++){
		int x, y;
		cin >> x >> y;
		arr[i] = {x, y};
	}

	cout << fractionalKnapsack(w, arr, n);
	
	return 0;
}	