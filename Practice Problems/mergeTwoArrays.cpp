#include <bits/stdc++.h>
using namespace std;

// Time complexity is big O((n+m)*log(n+m))
// Space complecity is big O(1)
void merge(int arr1[],int arr2[], int n, int m) 
{ 
    // code here 
    int i=0, j=0, k=n-1;
    while(i<=k && j<m){
        if(arr1[i] > arr2[j]){
            swap(arr1[k], arr2[j]);
            j++;
            k--;
        }
        else{
            i++;
        }
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
}

// Time complexity is big O((n+m)*log(n))
// Space complecity is big O(1)
void _merge(int arr1[], int arr2[], int n, int m){
	make_heap(arr2, arr2+m, greater<int>());
	for(int i=0; i<n; i++){
		if(arr1[i] > arr2[0]){
			pop_heap(arr2, arr2+m, greater<int>());
			swap(arr1[i], arr2[m-1]);
			push_heap(arr2, arr2+m, greater<int>());
		}
	}
	// sort(arr2, arr2+m);
	sort_heap(arr2, arr2+m);
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr1[] = {13, 21, 25, 25, 25, 28, 30, 30, 34, 35, 36, 39, 49, 49};
	int arr2[] = {10, 29};
	int n = 14, m = 2;
	
	for(auto x : arr1){
    	cout << x << " ";
    }cout << endl;
    for(auto x : arr2){
    	cout << x << " ";
    }cout << endl;

    // merge(arr1, arr2, n, m);
    _merge(arr1, arr2, n, m);

    for(auto x : arr1){
    	cout << x << " ";
    }
    for(auto x : arr2){
    	cout << x << " ";
    }
	return 0;
}	