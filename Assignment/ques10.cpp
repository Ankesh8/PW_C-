//check the point  in graph is same line or not
#include<iostream>
using namespace std;
int main(){
  int x1,y1,x2,y2,x3,y3;
  cout<<"enter the slope : ";
  cin>>x1>>y1>>x2>>y2>>x3>>y3;
  int m1,m2;
  m1=(y2-y1)/(x2-y1);
  m2=(y3-y2)/(x3-x2);
  if(m1==m2)
  cout<<"yes point  in same line";
  else
  cout<<"not point in  same line";
}