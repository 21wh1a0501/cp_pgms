#include <bits/stdc++.h>
using namespace std;
/*
SETS implementation same as maps internally 
order is not maintained
complex datassets are not be placed as the inbuilt hash functions are not placed

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
   s.insert("abc"); //o(1)
   s.insert("zsdf");
   s.insert("bcd");
   s.insert("abc");
   /*auto it = s.find("abc");//returns iterator o(1)
   if(it != s.end()){
       s.erase(it);
   }*/
   s.erase("zsdf");
   print(s);
   
}
