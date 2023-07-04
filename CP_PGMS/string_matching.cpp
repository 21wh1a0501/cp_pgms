
#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
void solve()
{
    string text,pattern;
    cin>>text>>pattern;
    string tmp = pattern + "#" + text;
    ll n = pattern.size();
    ll ans = 0;
    vector<ll> kmp(tmp.size(),0);
    for(ll i=1;i<tmp.size();i++)
    {
        ll j = kmp[i-1];
        while(j>0 && tmp[i]!=tmp[j])
        {
            j = kmp[j-1];
        }
        if(tmp[i]==tmp[j])
        j++;
        kmp[i] = j;
        if(j==n)
        ans++;
    }
    cout<<ans;
}
int main() {
	// your code goes here
	solve();
	return 0;
}
