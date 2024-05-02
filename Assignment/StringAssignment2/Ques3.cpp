//count the number of vowels in the substring
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  cin>>s;
  int count =0;
  int ans=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u') count++;
    else{
      ans += count*(count +1)/2;
      count =0;
    }
  }
  ans += count*(count +1)/2;
  cout<<ans<<endl;
}