#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> a(n), pos(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
        a[i]--;
        pos[a[i]] = i;
    }
    int passes = 1;
    for(int i = 1; i < n; i++){
        if(pos[i - 1] > pos[i]){
            passes += 1;
        }
        
    }
    cout<<passes<<endl;
    return 0;
}n
