#include <bits/stdc++.h>
using namespace std;
const int maxn = 200010;
typedef  long long ll;
int a[maxn];
int main(){
    int n, m, x;
    cin>>n;
    while(n--){
        cin>>m;
        ll sum1 = 0;
        for(int i = 0; i < m; i++){
            cin>>x;
            a[i] = x;
            sum1 += x;
        }
        ll maxsum = a[0], maxhere = a[0];
        for(int i = 1; i < m - 1; i++){
           if(maxhere <= 0){
               maxhere = a[i];
           }
           else{
               maxhere += a[i];
           }
           maxsum = max(maxsum, maxhere);
        }
        ll sum2 = a[1];
        maxhere = a[1];
        for(int i = 2; i < m; i++){
            if(maxhere <= 0){
               maxhere = a[i];
           }
           else{
               maxhere += a[i];
           }
           sum2 = max(sum2, maxhere);
        }
        if(max(maxsum, sum2) >= sum1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
