#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MOD = 1e9 + 7;
/* 
For solving any question in dp defining a good state is important.
1.state - dp(i, j) no of valid paths from (i, j) to (n ,n)
2.transition equation -  dp(i + 1, j) + dp(i, j + 1)
3.base condition - dp(n, n) = 1
4.subproplem - dp(1, 1)
*/
void solve(){
    int n;
    char ch;
    cin>>n;
    bool grid[n + 1][n + 1];
    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < n + 1; j++){
            cin>>ch;
            if(ch == '.'){
                grid[i][j] = 0;
            }
            else{
                grid[i][j] = 1;
            }
        }
    }
    int dp[n + 1][n + 1];
    for(int i = n; i >= 1; i--){
        for(int j = n; j >= 1; j--){
            if(i == n && j == n){
                dp[i][j] = 1;
            }
            else{
                int op1 = (i == n) ? 0 : dp[i + 1][j];// cant go further
                int op2 = (j == n) ? 0 : dp[i][j + 1];// cant go further
                dp[i][j] = (op1 + op2) % MOD;
                if(grid[i][j]){
                    dp[i][j] = 0;//if cell is blocked
                }
            }
        }
    }
    if(grid[n][n]){
        cout<<0<<endl;
    }
    else{
        cout<<dp[1][1]<<endl;
    }
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
