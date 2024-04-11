//find the second largest element in the array

#include<iostream>
#include<climits> //INT_MIN will defind in this header file
using namespace std;
int main(){
  int n;
  cout<<"enter the size of the array : ";
  cin>>n;
  int arr[n];
  //input
  cout<<"enter the element in the array :  ";
  for(int i=0;i<=n-1;i++){
    cin>>arr[i];
  }

    int max =INT_MIN;
    int smax =INT_MIN;
  for(int i =0;i<=n-1;i++){
    if(max <arr[i])
    max =arr[i];
  }  
   cout<<max<<endl;
   for(int i=0;i<=n-1;i++){
    if(arr[i]!=max && smax <arr[i])
    smax = arr[i];
   }
   cout<<smax;
}