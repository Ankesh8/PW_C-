// swap the two no. using pointer
// * is a dereference operator
#include<iostream>
using namespace std;
void swap(int *x,int *y){
  int temp;
  temp = *x;
  *x =  *y;
  *y = temp;
  return;
}
int main(){
  int x,y;
  cout<<"enter two no: ";
  cin>>x>>y;
  //pass by reference
  swap(&x,&y);
  cout<<x<<" "<<y;
}