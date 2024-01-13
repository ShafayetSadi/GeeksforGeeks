/*
Arithmetic Progression:
2, 4, 6, 8, 10, .....

in general: a, a+d, a+2d, a+3d, .....
a -> first term
d -> common difference

- nth term = a + (n-1)*d
- sum of n terms = (n/2)[2a + (n-1)*d]

- nth term = mth term + (n-m)*d, where n>m
- average = (1st term+nth term)/2
- sum = average*n


Geometric Progression:
2, 4, 8, 16, 32, .....

in general: a, ar, ar^2, ar^3, .....
a -> first term
r -> common ratio

- nth term = ar^(n-1)
- sum of n terms = ((a(1-r^n)) / (1-r))

sum of infinite term{
	if( r>=1) sum = infinite
	else sum = a/(1-r)
}

Interesting facts:
- Rice Grain and Chessboard -> 2^64-1(more than 18e18)
- for any three terms - a, b, c
	b^2 = ac
- product of n terms = (sqrt(first term * nth term))^n

*/
#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	return 0;
}	