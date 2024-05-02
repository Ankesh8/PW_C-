//find the sum of difference between even indexes and odd indexes
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the size of the array : ";
  cin>>n;
  int sumeven=0;
  int sumodd=0;
  int diff;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  for(int i=0;i<n;i++){
    if(arr[i]%2==0){
      sumeven +=arr[i];
    }
    else{
      sumodd +=arr[i];
    }
  }
  cout<<"sum of even array is  : "<<sumeven<<endl;
  cout<<"sum of odd array is : "<<sumodd<<endl;
   diff =sumeven-sumodd;
   cout<<"diff : "<<diff;
}