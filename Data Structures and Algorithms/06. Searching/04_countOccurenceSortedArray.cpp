#include <bits/stdc++.h>
using namespace std;

int firstBinarySearch(int arr[], int n, int x){
	int left = 0;
	int right = n-1;
	while(left <= right){
		int mid = (left+right)/2;
		if(arr[mid]==x){
			if(mid!=0 && arr[mid-1]==x){
				right = mid-1;
				continue;
			}
			return mid;
		}
		else if(arr[mid] > x){
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	return -1;
}
int lastBinarySearch(int arr[], int n, int x){
	int left = 0;
	int right = n-1;
	while(left <= right){
		int mid = (left+right)/2;
		if(arr[mid]==x){
			if(mid!=(n-1) && arr[mid+1]==x){
				left = mid+1;
				continue;
			}
			return mid;
		}
		else if(arr[mid] > x){
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	return -1;
}

// Naive way is to iterate all the elements with a loop and check if the element
// is equal to x and increase count
// Time complexity is big O(n)

// Another way is to find the first element by binary search. Then iterate k times
// where k is the answer. we can use while loop
// Time complexity is big O(log(n)+k)

// Efficient way
// Time complexity is big O(log(n))
int countOccurenceSortedArray(int arr[], int n, int x){
	int first = firstBinarySearch(arr, n, x);
	if(first == -1){
		return 0;
	}
	else{
		return (lastBinarySearch(arr, n, x) - first + 1);
	}

}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int arr[] = {10, 20, 20, 20, 30, 30};
	
	int x = 1;
	cout << countOccurenceSortedArray(arr, 6, x) << endl;
	x = 20;
	cout << countOccurenceSortedArray(arr, 6, x) << endl;
	x = 30;
	cout << countOccurenceSortedArray(arr, 6, x) << endl;

	return 0;
}	