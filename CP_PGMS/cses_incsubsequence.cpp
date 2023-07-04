#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MOD = 1e9 + 7;
/* 
For solving any question in dp defining a good state is important.
1.state - dp[x] = minimum ending value of an increasing subsequence of length x+1, using the elements considered so far.
2.transition equation - 
3.base condition - 
4.subproplem - 
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> dp;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    auto it = lower_bound(dp.begin(), dp.end(), x);
    if (it == dp.end()) {
      dp.push_back(x);
    } else {
      *it = x;
    }
  }
  cout << dp.size() << endl;
}
