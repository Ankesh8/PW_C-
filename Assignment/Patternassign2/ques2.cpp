#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the line : ";
  cin>>n;
  for(int i=0;i<=n-1;i++){
    for(int j=1;j<n-i;j++){
      cout<<"#";
    }
    for(int k=1;k<=2*i+1;k++){
      cout<<(char)(64+k);
    }
    cout<<endl;
  }
}