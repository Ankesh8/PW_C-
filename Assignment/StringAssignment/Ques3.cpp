//check the given string is palindrom or not
#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string s){
  int n =s.size();
  for(int i=0;i<=n/2;i++){
    if(s[i]!=s[n-i-1]) return false;
  }
  return true;
}
  int main() {
    string s;
    cin>>s;
    ispalindrome(s)? cout<<"yes ,a palindrom":cout<<"no , not a palindrome";
  }