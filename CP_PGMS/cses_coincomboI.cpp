#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MOD = 1e9 + 7;
/* 
For solving any question in dp defining a good state is important.
1.state - dp(i) no of ways to form sum = i using given coins
2.transition equation - dp(i) = dp(i - c1) + do(i - c2) + ..... + dp(i - cn)  
3.base condition - if coin value < sum then only perform
4.subproplem - dp(x)
*/
void solve(){
    int n, x;
    cin>>n>>x;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int dp[x + 1];
    dp[0] = 1;
    for(int i = 1; i <= x; i++){
        dp[i] = 0;
        for(int j : v){
            if(j <= i)
            dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
    }
    cout<<dp[x]<<endl;
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
