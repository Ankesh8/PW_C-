#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of lines : ";
  cin>>n;
  for(int p=1;p<=2*n-1;p++){
    cout<<"*";
  }
  cout<<endl;
  int m = n-1;
  int nsp = 1;
  for(int i=1;i<=m;i++){
    //star
    for(int j=1;j<=m+1-i;j++){
      cout<<"*";
    }
     //spaces
    for(int k=1;k<=nsp;k++){
      cout<<" ";
    }
    nsp +=2; 
    for(int j=1;j<=m+1-i;j++){
      cout<<"*";
    }

    cout<<endl;
  }
  }