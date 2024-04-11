//Take a floating value and print only fractional part of it
#include<iostream>
using namespace std;
int main(){
  float x;
  cin>>x;
  int y = (int)x; //typecasting float value into integer
  if(y<0) y= y-1;
  x = x  - y;
  cout<<x;
}