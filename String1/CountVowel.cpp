#include<iostream>
#include<string>
using namespace std;
int main(){
  string str= "ankesh";
  int i=0;
  int count =0;
  cout<<str<<endl;
  while(str[i] !='\0'){
    if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
      count++;
      i++;
  }
  cout<<count;
}