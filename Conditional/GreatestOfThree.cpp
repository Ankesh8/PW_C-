//wap to take three positive integer and check greatest of three
#include<iostream>
using namespace std;
int main(){
  int num1,num2,num3;
  cout<<"enter three number: ";
  cin>>num1>>num2>>num3;
  if(num1>num2 && num1>num3){
    cout<<"num1 is greatest "<<num1;
  }
  else if(num2>num1 && num2>num3){
    cout<<"num2 is greatest " <<num2;
  }
  else{
    cout<<"num3 is grestest "<<num3;
  }
}
