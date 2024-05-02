//time complexity o(n)
#include<iostream>
using namespace std;
int main(){
  int arr[] = {2,3,4,5,8,1,11,18,19};
  int n =9;
  int target = 20;
  bool flag = false;
  for(int i =0;i<n;i++){
    if(arr[i]==target){
      flag =true;
      break;
    }
  }
  if(flag==true)
    cout<<"present";
  else cout<<"not present";
}