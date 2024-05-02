#include<iostream>
using namespace std;
int main(){
  int x;
  int y;
  int* p1= &x;
  int* p2= &y;
  cout<<"enter first number : ";
  cin>>*p1;
  cout<<"enter Second number : ";
  cin>>*p2;
  cout<<*p1 + *p2;
}