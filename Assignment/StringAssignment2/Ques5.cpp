// find the max strig using lexiographycaly
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s = "az by d"; // it will check the ascii value of first char not the length
  string word =""; string maxword ="";
  int n =s.size();
  for(int i=0;i<n;i++){
    if(s[i]==' '){
      maxword = max(maxword,word);
      word ="";
    }
    else word += s[i];
  }
  maxword = max(maxword,word);
  cout<<maxword;
}