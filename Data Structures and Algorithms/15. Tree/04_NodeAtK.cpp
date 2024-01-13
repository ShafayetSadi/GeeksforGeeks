#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void printK(Node *root, int k){
    if(root == NULL) return;
    if(k == 0){
        cout << (root->key) << " ";
    }
    else{
        printK(root->left, k-1);
        printK(root->right, k-1);
    }
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