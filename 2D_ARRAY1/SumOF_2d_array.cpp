//find the sum of all element in the 2_d array
#include<iostream>
using namespace std;
int main(){
  int arr[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }
  //sum
  int sum=0;

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      sum =sum+arr[i][j];
    
    }
  }
  cout<<sum;
}