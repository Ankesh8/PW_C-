//wap to check the in given array have contain any duplicate element or not
#include<iostream>
using namespace std;
int main(){
  int arr[6] = {1,2,2,3,4,5};
  bool flag = false;
  for(int i=0;i<6;i++){
    for(int j = i+1;j<6;j++){
     if(arr[i]==arr[j]){
      flag = true;
      break;
     }
    }
  }
  if(flag==true) cout<<"duplicate element is found : ";
  else cout<<"not duplicate element is found  : ";
}