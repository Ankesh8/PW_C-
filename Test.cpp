#include<iostream>
using namespace std;
int main(){
  int x =5;
  int *p =&x;
  cout<<p<<endl;
  cout<<&x<<endl;
  cout<<&p<<endl;
  p = p+1;
  cout<<p<<endl;
  cout<<&p<<endl;

}