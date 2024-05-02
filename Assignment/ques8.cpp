//check the minimum of three
#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cout<<"enter three number : ";
  cin>>a>>b>>c;
  if(a<=b && a<=c){
    cout<<"a is smallest";
  }
  else if(b<=a && b<=c){
    cout<<"b is smallest";
  }
  else{
    cout<<"c is smallest";
  }

}
