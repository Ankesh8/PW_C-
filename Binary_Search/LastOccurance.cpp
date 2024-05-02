//print the index of first occurance of a element
#include<iostream>
using namespace std;
int main(){
  int arr[] ={1,2,3,3,4,5,6,6,7,7,8,11};
  int n = 12;
  int x =6;
  
  int lo =0;
  int hi = n-1;
  bool flag =false;
  while(lo<=hi){
    int mid = lo +(hi-lo)/2;
    if(arr[mid]==x){
      if(arr[mid]==n-1){
        flag =true;
        cout<<mid;
        break;
      }
      else if(arr[mid+1]!=x){
             flag =true;
             cout<<mid;
             break;
      }
      else lo =mid+1;
    }
    else if(arr[mid]<x) lo = mid+1;
    else hi =mid-1;
  }
  if(flag==false) cout<<-1;
}