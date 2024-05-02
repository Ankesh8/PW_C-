//wap to reverse the string and concatenate the string with original string
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
  string s;
  cin>>s;
  string temp =s;
  reverse(temp.begin(),temp.end());
  s +=temp;
  cout<<s;
}