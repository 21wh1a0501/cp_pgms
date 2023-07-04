#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MOD = 1e9 + 7;
/* 
For solving any question in dp defining a good state is important.
1.state - dp(i) as the minimum number of coins to achieve some sum; 
2.transition equation - dp[w]= (i=1 to n) min(dp[w-coins[i]])+1
3.base condition - dp(0) = 0
4.subproplem - dp(x)
*/
void solve(){
    ll dp[1000001];
    int n, x;
	cin >> n >> x;
	vector <int> coins(n);
	for (int i = 0; i < n; i++) {
	    cin >> coins[i];
	 }
	for (int i = 0; i <= x; i++) {
	    dp[i] = INT_MAX;
	}
	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int weight = 0; weight <= x; weight++) {
			if (weight - coins[i - 1] >= 0){
				dp[weight] = min(dp[weight], dp[weight - coins[i - 1]] + 1);
			}
		}
	}
	cout << (dp[x] == INT_MAX ? -1 : dp[x]) << '\n';
}
int main()
{
    int t;
    t = 1;
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    while(t--){
        solve();
    }
    return 0;
}
