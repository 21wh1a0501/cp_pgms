
#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    string s, bad; 
    cin>>s>>bad;
    long long int k;
    cin>>k;
    set<pair<lli, lli>> st;
    for(int i = 0; i < s.length(); i++){
        lli mod = 1000000007;
        lli hash1 = 0, hash2 = 0;
        lli p1 = 31, p2 = 29;
        lli pow1 = 1, pow2 = 1;
        lli badcount = 0;
        for(int j = i; j <s.length(); j++){
            badcount += (bad[s[j] - 'a'] == '0' ? 1:0);
            if(badcount>k){
                break;
            }
            hash1 = (hash1 + (s[j] - 'a' + 1) *pow1)%mod;
            hash2 = (hash2 + (s[j] - 'a' + 1) *pow2)%mod;
            pow1 = (pow1*p1)%mod;
            pow2 = (pow2 *p1)%mod;
            st.insert(make_pair(hash1, hash2));
        }
    }
    cout<<st.size()<<endl;
}
