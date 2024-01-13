#include <bits/stdc++.h>
using namespace std;

// Naive solution
// Time complexity is big O((m+n)*log(m+n))
void unionofArrays(int a[], int m, int b[], int n){
	/*
	create an array size of (m+n)
	put both arrays element in new array
	sort the array
	print the array but check if it is equal to previous
	element. If it is then continue.
	*/
}

// Efficient solution
// Time complexity is big O(m+n)
void _unionofArrays(int a[], int m, int b[], int n){
	int i=0, j=0;
	while(i<m && j<n){
		if(i>0 && a[i]==a[i-1]){
			i++;
			continue;
		}
		if(j>0 && b[j]==b[j-1]){
			j++;
			continue;
		}

		if(a[i] < b[j]){
			cout << a[i] << " ";
			i++;
		}
		else if(b[j] < a[i]){
			cout << b[j] << " ";
			j++;
		}
		else{
			cout << a[i] << " ";
			i++;
			j++;
		}
	}
	while(i<m){
		if(i>0 && a[i] != a[i-1]){
			cout << a[i] << " ";
		}
		i++;
	}
	while(j<n){
		if(j>0 && b[j] != b[j-1]){
			cout << b[j] << " ";
		}
		j++;
	}
	cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr1[] = {3, 5, 8};
	int arr2[] = {2, 8, 9, 10, 15};

	unionofArrays(arr1, 3, arr2, 5);
	_unionofArrays(arr1, 3, arr2, 5);

	int a[] = {2, 3, 3, 3, 4, 4};
	int b[] = {4, 4};

	unionofArrays(arr1, 3, arr2, 5);
	_unionofArrays(a, 6, b, 2);

	return 0;
}	