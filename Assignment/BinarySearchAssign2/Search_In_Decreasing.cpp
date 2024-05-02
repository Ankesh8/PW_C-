//binary search in sorted decreasing order
#include<iostream>
using namespace std;
int main(){
  int arr[6] = {10,9,6,5,4,2};
  int n =6;
  int x = 4;
  int lo =0;
  int hi = n-1;
  bool flag = false;
  while(lo<=hi){
    int mid = lo +(hi-lo)/2;
    if(arr[mid]==x){
      flag= true; 
      cout<<mid;
      break;
    } 
    else if(arr[mid]>x) lo =mid+1;
    else hi= mid-1;
  }
  cout<<endl;
  if(flag==true) cout<<"element is found";
  else cout<<"not found";
}