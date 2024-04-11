#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the size of the array : ";
  cin>>n;
  int arr[n];
  int product =1;
  cout<<"enter the element in the array :  ";
  for(int i=0;i<=n-1;i++){
    cin>>arr[i];
  }
  cout<<"product of the array is : ";
  for(int i=0;i<=n-1;i++){
    product = product *arr[i];
  }
  cout<<"product of the array is : "<<product;

}