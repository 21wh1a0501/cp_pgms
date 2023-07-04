#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MOD = 1e9 + 7;
/* 
For solving any question in dp defining a good state is important.
1.state - dp(i, x) no of valid ways to make sum x using coins c1, c2, c3 .... ci.
2.transition equation -  two options - i. we could take the cn coin then dp(i, x - i) 
                                       ii. we couldn't take the cn coin then dp(i - 1, x)
3.base condition - dp(i, 0) = 1
4.subproplem - dp(n, x)
*/
void solve(){
    int n, x;
    cin>>n>>x;
    vector <int> v(n + 1);
    for(int i = 1; i <= n; i++){
        cin>>v[i];
    }
    int dp[n + 1][x + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= x; j++){
            if(j == 0){
                dp[i][j] = 1;
            }
            else{
                int op1 = (v[i] > j) ? 0 : dp[i][j - v[i]];
                int op2 = (i == 1) ? 0 : dp[i - 1][j];
                dp[i][j] = (op1 + op2) % MOD;
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
