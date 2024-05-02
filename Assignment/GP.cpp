//print the GP for 3 12 48 ...n term 
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter n term  : ";
  cin>>n;
  int start=3 , d=4;
  while(n--){
    cout<<start<<" ";
    start = start*d;
  }
}