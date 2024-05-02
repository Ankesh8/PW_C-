//taking the input in the 2D array
#include<iostream>
using namespace std;
int main(){
  int m;
  cout<<"enter the no. of rows : ";
  cin>>m;
  int n;
  cout<<"enter the no. of column : ";
  cin>>n;
  int arr[m][n];
  cout<<"enter the element in the array :"<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  cout<<"display the element of the array: "<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}