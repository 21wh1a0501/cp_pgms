
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<vector<int>> ans;
	while (n--) {
		int a;
		cin >> a;
		int l = 0, r = ans.size();
		while (l != r) {
			int mid = (l + r) / 2;
			if (ans[mid].back() < a) r = mid;
			else l = mid + 1;
		}
		if (l == ans.size()) ans.push_back({a});
		else ans[l].push_back(a);
	}
	for (vector<int> i : ans) {
		for (int j : i) cout << j << ' ';
		cout << '\n';
	}
	return 0;
}
