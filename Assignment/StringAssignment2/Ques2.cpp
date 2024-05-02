//find the second largest number in the string
#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  cin>>s;
  char max1 ='!' ,max2 ='!';
  for(int i=0;i<s.size();i++){
    if(max1 < s[i]){
        max2 = max1;
        max1 = s[i];
    }
    else if(max2<s[i] and max1 !=s[i])  max2 =s[i];
  }
  if(max2=='!') cout<<"No 2nd Largest number";
  else cout<<max2<<endl;
}