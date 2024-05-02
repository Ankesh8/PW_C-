//print the AP for 4 7 10 13 upto n term;
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter n term : ";
  cin>>n;
  int start = 4,d=3; 
  while(n--){
    cout<<start<<" ";
    start=start + d;
  }
}