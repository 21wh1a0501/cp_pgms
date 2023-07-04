#include <iostream>
using namespace std;

void solve(){
    long long int n;
    cin>>n;
    cout<<n;
    while(n > 1){
        if(n & 1){
            n = n * 3 +1;
        }
        else{
            n >>= 1;
        }
        cout<<" "<<n;
    }
}
int main() {
	// your code goes here
	solve();
	return 0;
}
