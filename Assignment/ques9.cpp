//check the point of x and y are are lies in origin or not
#include<iostream>
using namespace std;
 int main(){
  int x,y;
  cout<<"enter the value of x and y : ";
  cin>>x>>y;
  if(x==0 and y==0) cout<<"point on orgin";
  else if(x==0 and y!=0) cout<<"point on y-axis";
  else if(x!=0 and y==0) cout<<"point on x-axis";
  else cout<<"point on somewhere else";
 }