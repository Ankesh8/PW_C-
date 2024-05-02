//Write a function to count the number of digits in a number and then print the square of this number.
#include<iostream>
using namespace std;
void CountDigit(int n){
  int c=0;
  while(n>0){
    n =n/10;
    c++;
  }
  cout<<c<<endl;
  cout<<"square of a total no. of digit is : "<<c*c<<endl;
  return;
}
int main(){
  int n;
  cout<<"enter the number : ";
  cin>>n;
  CountDigit(n);
}