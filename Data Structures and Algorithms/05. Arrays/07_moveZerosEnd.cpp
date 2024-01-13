#include <bits/stdc++.h>
using namespace std;

// Naive solution
void pushZerosToEnd(int arr[], int n){
	for(int i=0; i<n; i++){
		if(arr[i]==0){
			for(int j=i+1; j<n; j++){
				if(arr[j] != 0){
					swap(arr[i], arr[j]);
					break;
				}
			}
		}
	}
}

// Efficient Solution
void _pushZerosToEnd(int arr[], int n) {
    // code here
    // int last = -1;
    // for(int i=0; i<n-1; i++){
        // if(arr[i] != 0){
        //     last = i;
        // }
        // else{
            // if(arr[i+1] != 0){
            //     swap(arr[last+1], arr[i+1]);
            //     last++;
            // }
    //     }
    // }
    // code here
    int count = 0;
    for(int i=0; i<n; i++){
    	if(arr[i] != 0){
    		swap(arr[i], arr[count]);
    		count++;
    	}
    }
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {8, 5, 0, 10, 0, 20};
	// pushZerosToEnd(arr, 6);
	_pushZerosToEnd(arr, 6);

	for(auto x : arr){
		cout << x << " ";
	}cout << endl;

	return 0;
}	