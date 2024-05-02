#include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"enter the no of rows : ";
  cin>>m;
  int n;
  cout<<"enter the no of column : ";
  cin>>n;
  int arr1[m][n];
  int arr2[m][n];
  int res[m][n];
  cout<<"enter element in the first array :"<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr1[i][j];
    }
  }
  cout<<"enter element in the second array :"<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr2[i][j];
    }
  }
   cout<<"sum of 2 2d array  is :"<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      res[i][j] = arr1[i][j] + arr2[i][j];
    }
  }
   cout<<" Result of sum of 2 2d array is  :"<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<res[i][j]<<" ";
    }
    cout<<endl;
  }
}