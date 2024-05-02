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
  //print the 2D array
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  // storing the transpose array
  int t[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
     t[i][j] = arr[j][i];
    }
  }
//print the stored element in transpose matrix
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
     cout<<t[i][j]<<" ";
    }
    cout<<endl;
  }
}