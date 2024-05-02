#include<iostream>
using namespace std;
void sort01(int arr[],int n){
  int i=0;
  int j=n-1;
  while(i<=j){
    if(arr[i]<0 && arr[j]<0)
    i++;
    else if(arr[i]> 0 && arr[j]<0){
      int temp  =arr[i];
      arr[i] =arr[j];
      arr[j] = temp;
      i++;
      j--;
    }
    else if(arr[i]>0 && arr[j]>0)
    j--;
    else{
      i++;
      j--;
    }
  }
}

int main(){
int arr[] = {1,2,-6,12,-11,-14,15,-16};
int n = sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}
cout<<endl;
sort01(arr,n);
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}
}