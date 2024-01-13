#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

/*
Tree
-node
-root ->starting node
-leaf ->node without child(degree=0)
-child
-parent
-subtree
-descendants
-ancestors
-degree
-internal nodes

*/

/*
Binary Tree
-Every node has at-most two children
*/
struct Node
{
    int key;
    Node *left;
    Node*right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    /*
                10
            20      30
        40
    */
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    return 0;
}