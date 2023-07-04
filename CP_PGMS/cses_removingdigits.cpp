#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MOD = 1e9 + 7;
/* 
For solving any question in dp defining a good state is important.
1.state - dp(i) minimum steps needed to go from i to 0.
2.transition equation -  1 + dp(n - di) minimum over all valid di.
3.base condition - dp(0) = 0 no further steps
4.subproplem - dp(n)
*/
void solve(){
    int n;
    cin>>n;
    vector <int> dp(n + 1);
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        int temp = i;
        int minstep = 1e6 + 2;
        while(temp != 0){
            int di = temp % 10;
            temp = temp / 10;
            if(di == 0) continue;
            minstep = min(minstep, 1 + dp[i - di]);
        }
        dp[i] = minstep;
    }
    cout<<dp[n]<<endl;
    
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
