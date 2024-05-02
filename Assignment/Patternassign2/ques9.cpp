#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number of lines : ";
  cin>>n;
  for(int i=1;i<=2*n-1;i++) cout<<"*";cout<<endl;
  for(int i=1;i<=n-1;i++){
    //stars
    for(int j=1;j<=n-i;j++){
      cout<<"*";
    }
    //spaces
    for(int k=1;k<=2*i-1;k++){
      cout<<"#";
    }
    //stars
    for(int j=1;j<=n-i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int i=2;i<=n-1;i++){
    for(int j=1;j<=i;j++)
    cout<<"*";
    for(int k=1;k<=2*(n-i)-1;k++)
     cout<<"#";
    for(int j=1;j<=i;j++)
    cout<<"*"; 
    cout<<endl;
  }
  for(int i=1;i<=2*n-1;i++)
  cout<<"*";
}