/*take the input in array of some students and print
the marks if marks is less than 35*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the size of the array : ";
  cin>>n;
  int marks[n];
  cout<<"enter the marks : ";
  for(int i=0;i<=n-1;i++){
    cin>>marks[i];
  }
  for(int i=0;i<=n-1;i++){
    if(marks[i]<35)
    cout<<i<<" ";
  }
}


