#include<bits/stdc++.h>
using namespace std;

long long int cntU, cntD, cntL, cntR, n;
string s;
long long int x, y, x2, y2;

bool check(long long int val)
{
    long long int u = (val/n)*1ll*cntU;
    long long int d = (val/n)*1ll*cntD;
    long long int l = (val/n)*1ll*cntL;
    long long int r = (val/n)*1ll*cntR;

    for(int i=0; i<val%n; i++)
    {
        u += (s[i] == 'U');
        d += (s[i] == 'D');
        l += (s[i] == 'L');
        r += (s[i] == 'R');
    }

    long long int finalX = x + (r - l);
    long long int finalY = y + (u - d);

    long long int tmp = ((long long)(fabs(finalX-x2)+fabs(finalY-y2)));
    
    return (tmp <= val);
}

int main()
{
    cin>>x>>y>>x2>>y2;
    cin>>n;
    cin>>s;

    cntU = count(s.begin(), s.end(), 'U');
    cntD = count(s.begin(), s.end(), 'D');
    cntL = count(s.begin(), s.end(), 'L');
    cntR = count(s.begin(), s.end(), 'R');

    long long int low=0, high=1e15;
    long long int ans = -1;
    
    while(low <= high)
    {
        long long int mid = (low + high)/2;

        if(check(mid))
        {
            ans = mid;
            high = mid-1;
        }
        else
            low = mid+1;
    }

    cout<<ans<<"\n";
}
