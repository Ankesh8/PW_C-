#include<iostream>
using namespace std;
bool ispowerof2(int n){
  if(n==1) return true;
  if(n%2 !=0) return false;
   return ispowerof2(n/2);
}
int main(){
  int n =4;
  if(ispowerof2(n)) cout<<"yes , a power of 2"<<endl;
  else cout<<"No, not a power of 2"<<endl;
}