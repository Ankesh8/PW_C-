#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number of lines : ";
  cin>>n;
  for(int i=1;i<=n-1;i++){
    cout<<" ";
  }
  cout<<"*";
  cout<<endl;
  //upper triangle
  for(int i=2;i<=n-1;i++){
    //spaces
    for(int j=1;j<=n-i;j++)cout<<" ";
    cout<<"*";
    for(int j=1;j<=2*(i-1)-1;j++)cout<<" ";
    cout<<"*";
    cout<<endl;
  }