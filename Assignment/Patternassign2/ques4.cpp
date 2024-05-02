#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number of lines : ";
  cin>>n;
  for(int i=1;i<=n-1;i++){
    //spaces
    for(int j=1;j<i;j++){
      
      cout<<" ";
    }
     cout<<"*";
    //spaces
    int m= 2*(n-i);
    for(int k=1;k<m;k++){
      cout<<" ";
    }
     cout<<"*";
      cout<<endl;
  }
    for(int j=1;j<=n-1;j++){
      cout<<" ";
    }
      cout<<"*";
  
}