//take a input and check whether the number is three digit or not
#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"enter the number : ";
  cin>>num;
  if(num >= 100 && num <=999){
    cout<<"three digit number";
  }
  else{
    cout<<"Not a three digit number";
  }
}