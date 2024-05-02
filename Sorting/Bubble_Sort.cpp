#include<iostream>
using namespace std;
int main(){
  int arr[6] ={6,5,3,4,2,1};
  int n = 6;
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
  cout<<endl;
  for(int i=0;i<n-1;i++){
   // bool flag =true;
    for(int j = 0;j<n-1-i;j++){
      if(arr[j] >arr[j+1]){
        swap(arr[j],arr[j+1]);
       // flag = false;
      }
    }
    //this is make to check in o(n) times
    // if(flag ==true){ // if swap didn't happen
    //   break;
    // }
  }
   for(int i=0;i<n;i++){
    cout<<arr[i];
  }
}