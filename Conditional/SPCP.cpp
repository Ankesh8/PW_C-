#include<iostream>
using namespace std;
int main(){
  int sp,cp;
  cout<<"Enter cost price : ";
  cin>>cp;
  cout<<"Enter selling price : ";
  cin>>sp;
  if(sp>cp){
   cout<<"profit  is : "<<sp-cp;
  } 
  else if(sp==cp){
  cout<<"NO Profit No LOSS";
  }
  else{
   cout<<"Loss is : "<<cp-sp;
  }
}