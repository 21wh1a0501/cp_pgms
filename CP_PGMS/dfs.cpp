#include <bits/stdc++.h>
using namespace std;
void dfs(int curr, vector<vector<int>>&edges, int parent){
    cout<<curr<<" ";
    for(int neighbour : edges[curr]){
        if(neighbour != parent){
            dfs(neighbour, edges, curr);
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
    dfs(0, edges, -2);
}

int main(){
    int t = 1;
    while(t--){
        solve();
    }
}
