/*
The cost of stock on each day is given in an array A[] of size N.
What is the maximum profit we can have.
*/
#include <bits/stdc++.h>
using namespace std;

int maxProfit(int price[], int start, int end){
	if(end <= start){
		return 0;
	}
	int profit = 0;
	for(int i=start; i<end; i++){
		for(int j=i+1; j<=end; j++){
			if(price[j] > price[i]){
				int curr_profit = price[j] - price[i] +
								maxProfit(price, start, i-1)+
								maxProfit(price, j+1, end);
				profit = max(profit, curr_profit);
			}
		}
	}
	return profit;
}

int _maxProfit(int price[], int n){
	int profit = 0;
	for(int i=1; i<n; i++){
		if(price[i] > price[i-1]){
			profit += (price[i]-price[i-1]);
		}
	}
	return profit;
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {1, 5, 3, 8, 12};
	cout << maxProfit(arr, 0, 4) << endl;
	cout << _maxProfit(arr, 5) << endl;


	return 0;
}	