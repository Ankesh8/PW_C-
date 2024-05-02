#include<iostream>
using namespace std;
int main(){
  cout<<"enter the marks : ";
  int marks;
  cin>>marks;
  if(marks>=91 && marks<=100){
    cout<<"Excellent";
  }
  else if(marks>=81 && marks<=90){
    cout<<"very Good";
  }
  else if(marks>=71 && marks<=80){
     cout<<"good";
  }
  else if(marks>=60 && marks<=70){
    cout<<"we can do better";
  }
}