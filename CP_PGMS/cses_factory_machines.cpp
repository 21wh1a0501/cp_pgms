#include <bits/stdc++.h>

using namespace std;

using ll = long long;

using vi = vector<int>;

int main() {
	int n;
	ll t;
	cin >> n >> t;
	vector<ll> k(n);
	for (int i = 0; i < n; i++) { cin >> k[i]; }
	ll lo = 0;
	ll hi = 1e18;
	ll ans = 0;
	while (lo <= hi) {
		ll mid = (lo + hi) / 2;
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			sum += (mid / k[i]);
			if (sum >= t) {  // deal with overflow
				break;
			}
		}
		if (sum >= t) {
			ans = mid;
			hi = mid - 1;
		} else {
			lo = mid + 1;
		}
	}
	cout << ans << "\n";
}
