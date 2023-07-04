#include <bits/stdc++.h>
using namespace std;
void dfs(int curr, vector<vector<int>>&edges, int parent, vector <int> &level, vector <int> &parent1, int currlevel){
    level[curr] = currlevel;
    parent1[curr] = parent;
    for(int neighbour : edges[curr]){
        if(neighbour != parent){
            dfs(neighbour, edges, curr, level, parent1, currlevel + 1);
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
    vector <int> level(n, -1);
    vector <int> parent1(n, -1);
    dfs(0, edges, -2, level, parent1,  0);
    for(int i = 0; i < n; i++){
        cout<<level[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i < n; i++){
        cout<<parent1[i]<<" ";
    }
}

int main(){
    int t = 1;
    while(t--){
        solve();
    }
}
