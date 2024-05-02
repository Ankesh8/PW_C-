//take a character and check whether the character is alphabet or not
#include<iostream>
using namespace std;
int main(){
 char ch;
 cout<<"enter the character : ";
 cin>>ch;
 int ascii = (int)ch;
 // a to z = 97 to 122
 // A to Z = 65 to 90
 if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
  cout<<"character is alphabet";
 }
 else{
  cout<<"character not is alphabet";
 }
}