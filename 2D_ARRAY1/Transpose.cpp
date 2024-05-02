//print the transpose of a matrix
#include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"enter the number of rows : ";
  cin>>m;
  int n;
  cout<<"enter the number of column : ";
  cin>>n;
  int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  cout<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  //transpose of the matrix is 
  for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}