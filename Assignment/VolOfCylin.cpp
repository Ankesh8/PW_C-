//wap to finding the volume of cylinder by taking radius and height as input
#include<iostream>
using namespace std;
int main(){
  int r,h;
  float pi,volOfCylin;
  pi=3.14;
  cout<<"enter radius : ";
  cin>>r;
  cout<<"enter height : ";
  cin>>h;
  volOfCylin = pi * r * r *h;
  cout<<"volume of cylinder is : "<<volOfCylin;

}