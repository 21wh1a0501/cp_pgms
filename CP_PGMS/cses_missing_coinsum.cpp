#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    
    long long int curr = 0;
    for(int i = 0; i < n; i++){
        if(curr + 1 < a[i]){
            break;
        }
        curr += a[i];
    }
    cout<<curr + 1<<endl;
    return 0;
}
