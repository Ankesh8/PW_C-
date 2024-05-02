//count the number of elements strictly greater than x in the given array
#include<iostream>
using namespace std;
int main(){
  int arr[6] = {1,5,6,7,8,9};
  int x;
  cout<<"enter the x : ";
  cin>>x;
  int count = 0;
  for(int i=0;i<6;i++){
    if(arr[i]>x)
    count++;
  }
  cout<<"all value greater than x is  : "<<count;
}