//count the all consonants in the string
#include<iostream>
#include<string>
using namespace std;
int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int count =0;
  for(int i=0;i<n;i++){
    if(s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u' and s[i]!='A' and s[i]!='E' and s[i]!='I' and s[i]!='O' and s[i]!='U') 
    count++;
  }
  cout<<count;
}