#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of lines : ";
  cin>>n;
  for(int p=1;p<=2*n-1;p++){
    cout<<p;
  }
  cout<<endl;
  int m = n-1;
  int nsp = 1;
  for(int i=1;i<=m;i++){
     int a=1;
    //number
    for(int j=1;j<=m+1-i;j++){
      cout<<a;
      a++;
    }
     //spaces
    for(int k=1;k<=nsp;k++){
      cout<<" ";
      a++;
    }
    nsp +=2; 
    //number
    for(int j=1;j<=m+1-i;j++){
      cout<<a;
      a++;
    }
    cout<<endl;
  }


  }