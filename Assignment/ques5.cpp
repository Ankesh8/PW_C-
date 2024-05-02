//check area of circle is greater than perimeter or not
#include<iostream>
using namespace std;
int main(){
  int r;
  float area,peri;
  cout<<"enter the radius : ";
  cin>>r;
  area = 3.14 * r * r;
  cout<<"area of circle is : "<<area<<endl;
  peri = 2 * 3.14 * r;
  cout<<"perimeter of circle is  : "<<peri<<endl;
  if(area>peri){
    cout<<"Area is greater: ";
  }
  else{
    cout<<"perimeter is greater : ";
  }
}