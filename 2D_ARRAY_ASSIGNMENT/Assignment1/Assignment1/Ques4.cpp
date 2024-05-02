//print the maximum sum in rows print their index
#include<iostream>
#include<climits>
using namespace std;
int main(){
  int m,n;
  cin>>m>>n;
  int a[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
  }
  cout<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  int index =-1;
  int max =INT_MIN;
  for(int i=0;i<m;i++){
    int sum = 0;
    for(int j=0;j<n;j++){
      sum +=a[i][j];
    }
    if(max<sum){
      max =sum;
      index =i;
    }
  }
  cout<<"index is "<<index +1;
}