#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>

typedef long long LL;

using namespace std;

const int N = 2 * 1e5 + 10;
vector<LL> a;
int t;

LL min(LL a,LL b)
{
    return  a < b ? a : b;
}

int main()
{
    cin >> t;
    while(t -- )
    {
        a.clear();
        LL n,k,sum = 0;
        cin >> n >> k;
        for(int i = 1;i <= n;i++) {
            int x;
            cin >> x;
            sum += x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        if(k >= sum){
            cout<<"0"<<endl;
            continue;
        }
        else{
            LL res = sum - k;
            LL s = a[0] - res;
            for(int i = n - 1;i > 0;i--)
            {
                s += a[i];
                LL x;
                int y = n - i + 1;
                if(s >= 0) x = s / y;
                else x = (s- y + 1) / y;
                x = min(x,a[0]);
                res = min(res , a[0] - x + y - 1);

            }
            cout<<res<<endl;
        }
    }
    return 0;
}
