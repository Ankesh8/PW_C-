//print the factorial of a number
#include<iostream>
using namespace std;
int fact(int n){
  int f=1;
  if(n==1 || n==0 ) return 1;
  f = n*fact(n-1);
  return f;
}
 int main(){
   cout<<fact(5);
 }
