
#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long int n, sum = 0, ele;
    cin>>n;
    for(int i = 0; i < n - 1; i++){
        cin>>ele;
        sum += ele;
    }
    cout<<(n *(n + 1)) / 2 - sum<<endl;;
}
int main() {
	// your code goes here
	solve();
	return 0;
}
