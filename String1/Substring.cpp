#include<iostream>
#include<string>
using namespace std;
int main(){
// string s ="abcdefgh";
// //s.substring(ind,len)
// cout<<s.substr(2,3);


  string str;
  cout<<"Enter the string : ";
   cin>>str;
   int n =str.length();
   cout<<str.substr(n/2);

}