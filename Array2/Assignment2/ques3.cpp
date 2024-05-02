//check the given array is sorted or not
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the size of the array : ";
  cin>>n;
  int arr[n];
  int i;
  for(i=0;i<n;i++) cin>>arr[i];
  for(i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
      break;
    }
  }
  if(i==n-1) cout<<"array is sorted :";
  else cout <<"array is unsorted : ";
}