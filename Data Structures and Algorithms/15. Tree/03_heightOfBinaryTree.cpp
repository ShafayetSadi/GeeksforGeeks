#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int height(Node *root){
    if(root == NULL) return 0;
    else return max(hight(root->left), height(root->right)) + 1;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    return 0;
}