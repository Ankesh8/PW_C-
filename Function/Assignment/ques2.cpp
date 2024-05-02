//Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
using namespace std;
void ODD(int a,int b){
  for(int i=a;i<=b;i++){
    if(i%2 !=0){
      cout<<i<<endl;
    }
  }
  return;
}
int main(){
  int a,b;
  cout<<"Enter 1st number : ";
  cin>>a;
  cout<<"Enter 2st number : ";
  cin>>b;
  ODD(a,b);
}