//Write a function that takes the radius of a circle as an argument and returns its area.
#include<iostream>
using namespace std;
float areaofcircle(int radius){
  float area = 3.14 * radius *radius;
  return area;
}
int main(){
   int radius;
   cout<<"enter the radius : ";
   cin>>radius;
   cout<<areaofcircle(radius)<<" ";
}