#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long int n, ans = 0;
    cin>>n;
    long long int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            ans += abs(arr[i] - arr[i + 1]);
            arr[i + 1] = arr[i];
        }
    }
    cout<<ans<<endl;
}
int main() {
	// your code goes here
	solve();
	return 0;
}
