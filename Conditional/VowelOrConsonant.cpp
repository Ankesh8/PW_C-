//check the given character is vowel or consonent
#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"enter the character : ";
  cin>>ch;
  int ascii = (int)ch;
  if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
    if(ch=='a' || ch=='b'|| ch=='c'|| ch=='d' || ch=='e'){
      cout<<"character is vowel";
    }
    else{
      cout<<"character is consonant";
    } 
  }
  else{
    cout<<"character is not an alphabet";
  }
}