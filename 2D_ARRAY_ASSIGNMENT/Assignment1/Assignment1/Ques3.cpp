#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  int a[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  int l1,r1,l2,r2;
  cin>>l1>>r1>>l2>>r2;
  int sum=0;
  for(int i = min(l1,l2);  i<=max(l1,l2);  i++){
    for(int j = min(r1,r2); j<=max(r1,r2); j++){
     sum += a[i][j];
    }
  }
  cout<<sum<<" ";
}