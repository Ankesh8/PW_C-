//check whether the character is alphabet digit or special character;
#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"enter the character : ";
  cin>>ch;
  if((ch>='a' && ch<='z') || (ch>='A'&& ch<='Z')){
    cout<<"Character is alphabet";
  }
  else if(ch>='0' && ch<='9')
  {
    cout<<"character is digit";
  }
  else{
    cout<<"character is special character";
  }
}