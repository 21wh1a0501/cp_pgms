#include <bits/stdc++.h>
using namespace std;
/*
SETS implementation same as maps internally
keys are stored like in maps but no values are related
set, unorderd sets, multisets
stores unique values in sorted order
*/
void print( set <string> &s){
    for(string value : s){
        cout<<value<<endl;
    }
    /*for(auto it = s.begin(); it != s.end(); ++it){
        cout<<(*it)<<endl;
    }*/
}
int main(){
   set <string> s;
   s.insert("abc"); //o(logn)
   s.insert("zsdf");
   s.insert("bcd");
   s.insert("abc");
   /*auto it = s.find("abc");//returns iteratoro(log(n))
   if(it != s.end()){
       s.erase(it);
   }*/
   s.erase("zsdf");
   print(s);
   
}
