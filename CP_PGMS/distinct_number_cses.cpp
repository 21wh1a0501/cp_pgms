#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main(){
    int n, x;
    cin>>n;
    set<int> s1;
    for(int i = 0; i < n; i++){
        cin>>x;
        s1.insert(x);
    }
    cout<<s1.size()<<endl;
}
