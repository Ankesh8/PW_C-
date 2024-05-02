//wap to print the absolute value
#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"enter a integer : ";
  cin>>num;
  if(num<0){
    num = -num;
  }
  cout<<num;
}