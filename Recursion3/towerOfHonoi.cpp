#include<iostream>
using namespace std;
void tower(int n, char a, char b,char c){
  if(n==0) return;
  tower(n-1,a,c,b);
  cout<<a<<" -> "<<c<<endl;
  tower(n-1,b,a,c);
}
int main(){
  tower(3,'A','B','C');
}