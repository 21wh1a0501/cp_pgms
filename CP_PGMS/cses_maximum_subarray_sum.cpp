#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    long long int max_sum = 0, max_so_far = INT_MIN;
    for(int i = 0; i < n; i++){
        max_sum += a[i];
        if(max_sum > max_so_far){
            max_so_far = max_sum;
        }
        if(max_sum < 0){
            max_sum = 0;
        }
    }
    cout<<max_so_far<<endl;
    return 0;
}
