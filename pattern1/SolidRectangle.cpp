#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter no of rows : ";
  cin>>n;
  int m;
  cout<<"enter no of column : ";
  cin>>m;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cout<<j;
    }
    cout<<endl;
  }
}