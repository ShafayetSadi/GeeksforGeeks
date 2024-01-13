#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

// Time complexity is big O(V+E)

// The source or starting point is given
void BFS(vector<int> adj[], int V, int s){
    bool visited[V+1];
    for(int i=0; i<V; i++){
        visited[i] = false;
    }
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while(q.empty() == false){
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(auto v : adj[u]){
            if(visited[v] == false){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

// No source is given and graph may be disconnected
void BFS(vector<int> adj[], int s, bool visited[]){
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while(q.empty() == false){
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(auto v : adj[u]){
            if(visited[v] == false){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

void BFSDis(vector<int> adj[], int V){
    bool visited[V+1];
    for(int i=0; i<V; i++){
        visited[i] = false;
    }
    for(int i=0; i<V; i++){
        if(visited[i] == false){
            BFS(adj, i, visited);
        }
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