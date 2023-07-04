#include <bits/stdc++.h>
using namespace std;
//without dfs also we could do i.e size of adjacencylist -1
//for root size of adjacency list only
void dfs(int curr, vector<vector<int>>&edges, int parent, vector <int> &subtree, int currlevel){
    for(int neighbour : edges[curr]){
        if(neighbour != parent){
            dfs(neighbour, edges, curr, subtree, currlevel + 1);
            subtree[curr] += subtree[neighbour];
        }
    }
    subtree[curr]++;
}
void solve(){
    int n;
    cin>>n;
    vector<vector<int>> edges(n, vector<int>());
    for(int i = 0; i < n - 1; i++){
        int a, b;
        cin>>a>>b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    vector <int> subtree(n, 0);
    dfs(0, edges, -2, subtree,  0);
    cout<<endl;
    for(int i = 0; i < n; i++){
        cout<<subtree[i]<<" ";
    }
}

int main(){
    int t = 1;
    while(t--){
        solve();
    }
}
