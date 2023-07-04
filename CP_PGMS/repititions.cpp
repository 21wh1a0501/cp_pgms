
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string dna;
    cin>>dna;
    int count = 1, ans = 1;
    for(int i = 0; i < dna.length() - 1; i++){
        if(dna[i] == dna[i + 1]){
            count++;
        }
        else{
            count = 1;
        }
        ans = max(ans, count);
    }
    cout<<ans<<endl;
}
int main() {
	// your code goes here
	solve();
	return 0;
}
