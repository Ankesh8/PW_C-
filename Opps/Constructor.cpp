#include<iostream>
using namespace std;
class Rectangle{
  public:
  int l;
  int b;
  //default constrctor
  Rectangle(){
    l=0;
    b=1;
    cout<<l<<" "<<b<<endl;
  }

  //parameterised constructor
  Rectangle(int x,int y){
    l=x;
    b= y;
  }
  //copy constructor
  Rectangle(Rectangle &r){
    l = r.l;
    b = r.b;
  }
};
int main(){
  Rectangle r1;
  Rectangle r2(3,5);
  cout<<r2.l<<" "<<r2.b<<endl;
  Rectangle r3= r2;
  cout<<r3.l<<" "<<r3.b<<endl;
}