#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MOD = 1e9 + 7;
/* 
For solving any question in dp defining a good state is important.
1.state - dp(i, x) maximum number of pages that we can buy from i books and x money 
2.transition equation -  i. we can include book - dp[i - 1, x]
                         ii. we can exclude the book - pn + sp[i - 1, x - c1]
3.base condition - if(i == 0 || j == 0) dp[i][j] = 0
4.subproplem - dp(n, x)
*/
void solve(){
    int n, x;
    cin>>n>>x;
    int cost[n + 1];
    int page[n + 1];
    for(int i = 1; i <= n; i++){
        cin>>cost[i];
    }
    for(int i = 1; i <= n; i++){
        cin>>page[i];
    }
    int dp[n + 1][x + 1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= x; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
            else{
                int op1 = (i == 1) ? 0 : dp[i - 1][j];
                int op2 = (j < cost[i]) ? 0 : (page[i] + dp[i - 1][j - cost[i]]);
                dp[i][j] = max(op1, op2);
            }
        }
    }
    cout<<dp[n][x]<<endl;
    
}
int main()
{
    int t;
    t = 1;
    while(t--){
        solve();
    }
    return 0;
}
