
#include <bits/stdc++.h>

using namespace std;
const int maxn = 2e5 + 10;
int a[maxn];
bool f[maxn];
int n, x, ans, i, j, k;
int main(){
    cin >> n >> x;
    for(int k = 0; k < n; k++) cin>>a[k];
    sort(a, a + n);
    i = 0;
    j = n - 1;
    while(i < j){
        if(a[i] + a[j] > x){
            --j;
        }
        else{
            f[i] = true;
            f[j] = true;
            ++i;
            --j;
            ++ans;
        }
        
    }
    for (int i = 0; i < n; i++) {
		ans += f[i] == false;
	}
	cout << ans << endl;
	return 0;
}
