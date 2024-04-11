#include<iostream>
using namespace std;
int main(){
  int size;
  int sum =0;
  cout<<"enter the size of the array :";
  cin>>size;
  int arr[size];
  cout<<"Entet the element in the array : "<<endl;
  for(int i=0;i<=size-1;i++){
    cin>>arr[i];
  }
  for(int i=0;i<=size-1;i++){
    sum =sum+arr[i];
  }
  cout<<"sum of array is : "<<sum;
}