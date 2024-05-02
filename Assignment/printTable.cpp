//print the table of n number n is given by user
#include<iostream>
using namespace std;
int main(){
  int t;
  cout<<"enter the number u want to print their table : ";
  cin>>t;
  int i=1;
   // int sum=0;
  // for(int i=1;i<=10;i++){
  //   sum = t * i;
  //   cout<<sum<<endl;
  // }
  while(i<=10){
    cout<<t*i<<endl;
    i++;
  }
}