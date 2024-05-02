//check the area of rectangle is greater than area of perimeter or not
#include<iostream>
using namespace std;
int main(){
int l,b;
float area,peri;
cout<<"enter the length and breadth of rectangle : ";
cin>>l>>b;
area= l*b;
peri = 2*(l+b);
if(area>peri)
cout<<"Area is greater";
else if(area==peri)
cout<<"area and perimeter both are equal";
else
cout<<"perimeter is greater";
}