#include <bits/stdc++.h>
using namespace std;
//without dfs also we could do i.e size of adjacencylist -1
//for root size of adjacency list only
void dfs(int curr, vector<vector<int>>&edges, int parent, vector <int> &children, int currlevel){
    for(int neighbour : edges[curr]){
        if(neighbour != parent){
            children[curr]++;
            dfs(neighbour, edges, curr, children, currlevel + 1);
        }
    }
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
    vector <int> children(n, 0);
    dfs(0, edges, -2, children,  0);
    cout<<endl;
    for(int i = 0; i < n; i++){
        cout<<children[i]<<" ";
    }
}

int main(){
    int t = 1;
    while(t--){
        solve();
    }
}
