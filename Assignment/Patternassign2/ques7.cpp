#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the no. of lines : ";
  cin>>n;
  for(int i=1;i<=n-1;i++){
    for(int j=1;j<=i;j++){
      cout<<"* ";
    }
    for(int j=1;j<=2*(n-i)-1;j++){
      cout<<"# ";
    }
     for(int j=1;j<=i;j++){
      cout<<"* ";
    }
     cout<<endl;
  }
   for(int j=1;j<=2*n-1;j++){
      cout<<"* ";
    }
    cout<<endl;
     for(int j=1;j<=2*n-1;j++){
      cout<<"* ";
    }
    cout<<endl;
     for(int i=1;i<=n-1;i++){
    for(int j=1;j<=n-i;j++){
      cout<<"* ";
    }
    for(int j=1;j<=2*i-1;j++){
      cout<<"# ";
    }
    for(int j=1;j<=n-i;j++){
      cout<<"* ";
    }
    cout<<endl;
     }
}