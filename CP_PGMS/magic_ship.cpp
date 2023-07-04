#include <bits/stdc++.h>
#define maxn 100005
using namespace std;
typedef long long ll;
ll X,Y,x,y,n;
pair<ll,ll> sum[maxn];
bool check(ll mid)
{
    ll val=mid/n;
    ll lef=mid%n;
    ll dx=X-x,dy=Y-y;
    dx-=val*sum[n-1].first;
    dy-=val*sum[n-1].second;
    dx-=sum[lef-1].first;
    dy-=sum[lef-1].second;
    ll temp=abs(dx)+abs(dy);
    if(temp<=mid) return true;
    else return false;
}
int main()
{
    string s;
    cin>>x>>y>>X>>Y>>n>>s;
    for(int i=0;i<n;++i)
    {
      if(s[i]=='U')
      {
          sum[i].first=sum[i-1].first;
          sum[i].second=sum[i-1].second+1;
      }
      else if(s[i]=='D')
      {
          sum[i].first=sum[i-1].first;
          sum[i].second=sum[i-1].second-1;
      }
      else if(s[i]=='L')
      {
 
          sum[i].first=sum[i-1].first-1;
          sum[i].second=sum[i-1].second;
      }
      else
      {
 
          sum[i].first=sum[i-1].first+1;
          sum[i].second=sum[i-1].second;
      }
    }
    ll L=1,R=2e18;
    ll res=-1;
    while(L<=R)
    {
        ll mid=(L+R)>>1;
        if(check(mid))
        {
            res=mid;
            R=mid-1;
        }
        else L=mid+1;
    }
    cout<<res<<endl;
    return 0;
}
