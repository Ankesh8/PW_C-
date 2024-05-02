//take a input and check the number is divisible by 5 or 3 but not 15
#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"enter the number : ";
  cin>>num;
  if(num%5==0 || num%3==0){
    if(num%15!=0){
      cout<<"number is divisible by 5 or 3 but not 15";
    }
    else{
      cout<<"not matching condition";
    }
  }
  else{
    cout<<"not matching condition";
  }
}