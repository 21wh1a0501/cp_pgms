#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<long double> s, d;

long double check(long double t)
{
    long double maxD = -1e18;
    long double minD = 1e18;

    for(int i=0; i<n; i++)
    {
        maxD = max(maxD, s[i]*t + d[i]);
        minD = min(minD, s[i]*t + d[i]);
    }

    return (maxD - minD);
};

int main()
{
    cin>>n>>k;

    s.resize(n);
    d.resize(n);

    for(int i=0; i<n; i++)
        cin>>s[i]>>d[i];

    long double ans = 1e18;

    long double low=0, high=k;

    for(int i=0; i<100; i++)
    {
        long double mid1 = low + (high - low)/3;
        long double mid2 = high- (high - low)/3;

        if(check(mid1) < check(mid2))
            high = mid2, ans = check(mid2);
        else
            low = mid1, ans = check(mid1);
    }

    cout<<fixed<<setprecision(6);
    cout<<ans<<"\n";
}
