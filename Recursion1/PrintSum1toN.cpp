#include<iostream>
using namespace std;

 //parameterized
// void sumno(int sum,int n){
//   if(n==0){
//   cout<<sum;
//   return;
//   }
//   sumno(sum+n,n-1);
// }

//without parameter
int sum(int n){
  if(n==0) return 0;

  return n +sum(n-1);
}
int main(){
  //sumno(0,5); //parameter
  cout<<sum(10);
}