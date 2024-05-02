//print the wave pattern of a matrix
#include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"enter the rows of matrix : ";
  cin>>m;
  int n;
  cout<<"enter the col  of matrix :";
  cin>>n;
  int a[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
  }
  cout<<endl;
   for(int i=m-1;i>=0;i--){
    if(i%2==0)
    {
    for(int j=0;j<n;j++){
      cout<<a[i][j]<<" ";
      }
    }
    else{
      for(int j=n-1;j>=0;j--){
        cout<<a[i][j]<<" ";
      }
    }
  }

  //column printing
  // int i=0;
  // for(int j=0;j<n;j++){
  //  if(j%2==0){
  //      for(int i=0;i<m;i++){
  //     cout<<a[i][j];
  //     }
  //  }
  //  else{
  //       for(int i=m-1;i>0;i--){
  //       cout<<a[i][j];
  //        }
  //     }
  // }
}