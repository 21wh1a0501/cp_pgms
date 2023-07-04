#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
/* 
For solving any question in dp defining a good state is important.
1.state - dp[i] the number of valid ways to get sum upto i.
2.transition equation -  dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4] + dp[i - 5] + dp[i - 6]
3.base condition - if i - 1 < 0 avoid it and dp[0] = 1.
4.subproplem - dp[n]
*/
void solve(){
    int n;
    cin>>n;
    vector <int> dp(n + 1, 0);
    dp[0] = 1;
    for(int i = 1; i < n + 1 ; i++){
        for(int j = 1; j <= 6; j++){
            if(j > i) break;
            dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
    }
    cout<<dp[n];
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
