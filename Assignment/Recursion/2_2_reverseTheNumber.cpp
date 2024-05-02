#include<iostream>
using namespace std;
int reverse(int n, int &ans){
  if(n<=0) return ans;
  int dig = n%10;
  ans = ans*10+dig;
  return reverse(n/10,ans);
}
int main(){
  int n=123;
  int ans=0;
  cout<<reverse(n,ans);
}