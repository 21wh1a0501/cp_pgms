#include <bits/stdc++.h>
using namespace std;
#define MAXN 202020

vector <vector<int>> adj(MAXN);
vector<int> subtree(MAXN);
int cal(int node){
    if(adj[node].size() == 0){
        return 1;
    }
    else{
        for(int i = 0; i < adj[node].size(); i++){
            subtree[node] += cal(adj[node][i]);
        }
    }
    return subtree[node] + 1;
}
int main(){
    int n;
    cin>>n;
    for(int i = 2; i <= n; i++){
        int boss;
        cin>>boss;
        adj[boss].push_back(i);
    }
    cal(1);
    for(int i = 1; i <= n; i++){
        cout<<subtree[i]<<" ";
    }
    return 0;
}
