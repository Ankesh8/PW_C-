#include<iostream>
using namespace std;
int main(){
  int days;
  cout<<"enter days : ";
  cin>>days;
  switch (days)
  {
  case 1:
       cout<<"Monday";
       break;
  case 2:
       cout<<"Tuesday";
       break;
  case 3:
       cout<<"wednesday";
       break;
  case 4:
       cout<<"thursday";
       break;
  case 5:
       cout<<"friday";
       break;
  case 6:
       cout<<"saturday";
       break;
  case 7:
       cout<<"sunday";
       break;
  default:
     cout<<"invald days";
    break;
  }
}