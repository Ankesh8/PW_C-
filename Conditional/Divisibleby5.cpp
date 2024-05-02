//wap to check the given number is divisible by 5 or not
#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"enter the number : ";
  cin>>num;
  if(num % 5 == 0){
    cout<<"number is divisible by 5 : "<<num;
  }
  else{
    cout<<" number is not divisible by 5 : "<<num;
  }
}