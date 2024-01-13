#include <bits/stdc++.h>
using namespace std;

// Naive solution
// It's going to return floor root
int sqRoot(int x){
	int i=1;
	while(i*i <= x){
		i++;
	}
	return (i-1);
}

// Efficient solution
// O(log(n))
int _sqRoot(int x){
	int low = 1, high = x, ans = -1;
	while(low <= high){
		int mid = (low+high)/2;
		if(mid*mid == x) return mid;
		else if(mid*mid > x) high = mid-1;
		else {
			low = mid+1;
			ans = mid;
		}
	}
	return ans;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n = 9;
	cout << sqRoot(9) << endl;
	cout << _sqRoot(9) << endl;
	
	return 0;
}	