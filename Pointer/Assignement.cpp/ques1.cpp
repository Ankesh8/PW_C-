//Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int main(){
   int x,y;
   cout<<"enter two number : ";
   cin>>x>>y;
   int *ptr1;
   int *ptr2;
   ptr1 = &x;
   ptr2 = &y;
   cout<<(*ptr1)*(*ptr2);
}
