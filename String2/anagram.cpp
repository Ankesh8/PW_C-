#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string s ="ankeshkumar";
  string s1 ="kumaranshek";
  sort(s.begin(),s.end());
  sort(s1.begin(),s1.end());
  if(s==s1)
  cout<<true;
  else cout<<false;
}