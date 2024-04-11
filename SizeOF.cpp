//using sizeOf operator to find the length of the array
#include<iostream>
using namespace std;
int main(){
  int arr[] = {1,2,3,5,6,7,8,9,10,11,12,13};
  cout<<sizeof(arr)/sizeof(arr[0]);
}