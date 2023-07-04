#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MOD = 1e9 + 7;
/* 
For solving any question in dp defining a good state is important.
1.state - dp(a, b) minimum no of cuts required to make rectangle of side a * b to square
2.transition equation - min[(for(i, 1, b - 1) 1 + dp(a, b - i) + dp(a, i)), (for(i, 1, a - 1) 1 + dp(a - i, b) + dp(i, b))]
3.base condition - dp(a, a) = 0 no cuts already a square
4.subproplem - dp(A, B)
*/
void solve(){
  int a, b;
  cin>>a>>b;
  int dp[a + 1][b + 1];
  for(int h = 1; h <= a; h++){
      for(int w = 1; w <= b; w++){
          if(h == w){
              dp[h][w] = 0;
          }
          else{
              int ans = 1e8;
              for(int i = 1; i < w; i++){
                 ans = min(ans, 1 + dp[h][w - i] + dp[h][i]);
              }
              for(int j = 1; j < h; j++){
                  ans = min(ans, 1 + dp[h - j][w] + dp[j][w]);
              }
              dp[h][w] = ans;
          }
      }
  }
   cout<<dp[a][b]<<endl;
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
