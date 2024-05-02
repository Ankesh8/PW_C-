// push the zero element at the end of the loop without effecting other element
#include<iostream>
using namespace std;
int main(){
  int arr[] ={5,0,1,2,0,0,4,0,3};
  int n = 9;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  //bubble sort
  for(int i=0;i<n-1;i++){
//traversing
    for(int j = 0;j<n-1-i;j++){
      if(arr[j]==0){ //swap
        swap(arr[j],arr[j+1]);
      }
    }
  }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}