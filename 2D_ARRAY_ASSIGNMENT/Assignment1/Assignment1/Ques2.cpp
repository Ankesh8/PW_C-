#include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"Enter the rows : ";
  cin>>m;
  int n;
  cout<<"Enter the Column : ";
  cin>>n;
  //input in the first 2d-array
  cout<<"enter value in 1st array :"<<endl;
  int a[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
  }
  //input in 2nd 2d-array
  cout<<"enter value 2nd array :"<<endl;
  int b[m][n];
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>b[i][j];
    }
  }
  //store the sum in resultant
  int res[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      res[i][j] = a[i][j] + b[i][j];
    }
  }
  //printing their sum
  cout<<"sum of 2 2d array is  : "<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<res[i][j]<<" ";
    }
    cout<<endl;
  }
}