// transpose a matrix in same matrix
#include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"enter the number of rows/column : ";
  cin>>m;
  int arr[m][m];
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }
  cout<<endl;
  //print
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  //transpose of the matrix in a same matrix
  for(int i=0;i<m;i++){
    for(int j=i+1;j<m;j++){
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }

  //after tranform print the matrix
   for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}