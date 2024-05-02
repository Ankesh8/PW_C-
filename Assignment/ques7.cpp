//check whether the triangle is equilateral, isolation or scalene
#include<iostream>
using namespace std;
int main(){
  int side1,side2,side3;
  cout<<"enter three side : ";
  cin>>side1>>side2>>side3;
  if(side1==side2 && side2==side3){
    cout<<"triangle is equilateral triangle";
  }
  else if(side1==side2 || side2== side3 || side1==side3){
     cout<<"this is isoscalenes ";
  }else{
    cout<<"this is scalenes";
  }
}