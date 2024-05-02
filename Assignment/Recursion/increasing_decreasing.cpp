#include<iostream>
using namespace std;
void fun(int n,int i){
  if(i>n) return;
  cout<<i<<" ";
  fun(n,i+1);
  if(i>1) cout<<i-1<<" ";
}
int main(){
  int n =4;
  fun(n,1);
}