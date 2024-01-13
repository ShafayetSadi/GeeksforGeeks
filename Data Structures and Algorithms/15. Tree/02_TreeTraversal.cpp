#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

/*
1. Breadth First(Or level order)
2. Depth First
    - Inorder
    - Preorder
    - Postorder
*/
/*
Depth First:
-Inorder(left root right)
-Preorder(root left right)
-Postorder(left right root)

Recursive
    1. Traverse Root
    2. Traverse left subtree
    3. Traverse right subtree
*/

void inorder(Node *root){
    if(root != NULL){
        inorder(root->left);
        cout << (root->key) << " ";
        inorder(root->right);
    }
}

void preorder(Node *root){
    if(root != NULL){
        cout << (root->key) << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node *root){
    if(root != NULL){
        preorder(root->left);
        preorder(root->right);
        cout << (root->key) << " ";
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