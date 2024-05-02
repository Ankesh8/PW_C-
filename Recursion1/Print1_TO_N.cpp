#include<iostream>
using namespace std;
void fun(int i,int n){  //using extra parameter
  if(i>n) return;
  cout<<i<<endl;
  fun(i+1,n);
}
int main(){
  int n;
  cin>>n;
  cout<<endl;
  fun(1,n);
}