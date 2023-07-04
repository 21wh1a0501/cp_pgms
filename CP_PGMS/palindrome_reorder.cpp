//10-04-2023
//cses problemset palindrome reorder
/*description - give a string we have to reorder as it to palindrome.*/
/*approach -
    1.Count occurrences of all characters. 
    2.Count odd occurrences. If this count is greater than 1 or is equal to 1 and length of the string is even then obviously palindrome cannot be formed from the given string. 
    3.Traverse the map. For every character with count as count, attach count/2 characters to end of firstHalf and beginning of secondHalf. 
    4.Finally return the result by appending firstHalf and secondHalf*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    map<char, int>mp;
    for(auto it:s) mp[it]++;
    int cnt = 0;
    for(auto it:mp){
        if(it.second % 2 == 1){
            cnt++;
            if(cnt > 1){
                cout<<"NO SOLUTION"<<endl;
            }
        }
    }
    string ans = "";
    char x = '#';
    for(auto it:mp){
        for(int i = 0; i <it.second / 2; i++){
            ans.push_back(it.first);
        }
        if(it.second % 2 == 1){
            x = it.first;
        }
    }
    s = ans;
    if(x != '#'){
        s+=x;
    }
    reverse(ans.begin(), ans.end());
    s += ans;
    cout<<s<<endl;
}

int main() {
	// your code goes here
	solve();
	return 0;
}
