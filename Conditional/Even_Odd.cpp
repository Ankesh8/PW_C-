//take a  input and check number is even or odd and number must be positive integer
#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"enter the number : ";
  cin>>num;
  if (num>0 && num % 2 ==0){
    cout<<"Number is even "<<num;
  } 
  else{
    cout<<"Number is odd "<<num;
  }
  }