//find the third largest element in the array
#include<iostream>
#include<climits>
using namespace std;
int main(){
  int arr[6] = {1,4,5,6,11,12};
  int max = INT_MIN;
  int smax  =INT_MIN;
  int thridmax =INT_MIN;
  for(int i=0;i<6;i++){
    if(arr[i]>max) max = arr[i];
  }
  for(int i = 0;i<6;i++){
    if(arr[i]!=max && arr[i]>smax ) smax =arr[i];
  }
  for(int i=0;i<6;i++){
  if((arr[i]!= max && arr[i]!= smax) && arr[i]>thridmax)
  thridmax =arr[i];
  }
  cout<<thridmax;
}