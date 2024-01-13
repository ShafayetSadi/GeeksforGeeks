#include <bits/stdc++.h>
using namespace std;

// Naive solution
// Time complexity is big O(m*n)
void intersection(int a[], int m, int b[], int n){
	for(int i=0; i<m; i++){
		if(i>0 && a[i]==a[i-1]){
			continue;
		}
		for(int j=0; j<n; j++){
			if(a[i]==b[j]){
				cout << a[i] << " ";
				break;
			}
		}
	}
	cout << endl;
}

// Efficient solution
// Time complexity is big O(m+n)
void _intersection(int a[], int m, int b[], int n){
	int i=0, j=0;
	while(i<m && j<n){
		// if(i>0 && a[i]==a[i-1]){
		// 	i++;
		// 	continue;
		// }
		if(a[i] == b[j]){
			if(a[i]!=a[i-1]){
				cout << a[i] << " ";
			}
			i++;
			j++;
		}
		else if(a[i] < b[j]){
			i++;
		}
		else{
			j++;
		}
	}
	cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr1[] = {3, 5, 10, 10, 10, 15, 15, 20};
	int arr2[] = {5, 10, 10, 15, 30};

	intersection(arr1, 8, arr2, 5);
	_intersection(arr1, 8, arr2, 5);

	return 0;
}	