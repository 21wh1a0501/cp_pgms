#include <bits/stdc++.h>
using namespace std;
/*
MULTISETS - used to store multiple values
uses red black tree
insertion of duplicates allowed
instead of priority queues use multisets
*/
void print( multiset <string> &s){
    for(string value : s){
        cout<<value<<endl;
    }
    /*for(auto it = s.begin(); it != s.end(); ++it){
        cout<<(*it)<<endl;
    }*/
}
int main(){
   multiset <string> s; 
   s.insert("abc"); //o(logn)
   s.insert("zsdf");
   s.insert("bcd");
   s.insert("abc");
   auto it = s.find("abc");//returns iterator o(log(n)) returns first iterator
 
   if(it != s.end()){
       s.erase(it);
   }
   //if iterator is passed then it is only is deleted but when value is passed all duplicates are deleted
   
   //s.erase("zsdf");
   print(s);
}
