#include<iostream>
using namespace std;
void display(int a[],int size){
  for(int i=0;i<=size-1;i++){
    cout<<a[i]<<" ";
  }
  return;
}
int B(int a[],int size){
  a[0] = 100;
}
int main(){
  int arr[5] = {1,2,3,4,5};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<size<<endl;
  display(arr,size);
  B(arr,size);
  cout<<endl;
  display(arr,size);
}