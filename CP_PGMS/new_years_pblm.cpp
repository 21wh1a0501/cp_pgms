
#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int m, n;
vector<vector<int>> g;

bool check(int mid) {
    set<int> s[m];
    set<int> ok;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[j][i] >= mid) {
                s[j].insert(i);
                ok.insert(i);
            }
        }
    }
    if (ok.size() < n) return false;
    for (int i = 0; i < m; i++) {
        if (s[i].size() > 1) return true;
    }
    return false;
}

void solve() {
    cin >> m >> n;
    g = vector<vector<int>> (m, vector<int> (n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> g[i][j];
        }    
    }
    int l = 0, r = 1e9 + 1;
    while (l < r) {
        int mid = l + r >> 1;
        if (check(mid)) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    cout << l - 1 << endl;
}

signed main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
