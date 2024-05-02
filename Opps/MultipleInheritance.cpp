#include<iostream>
using namespace std;
class parent1{
  public:
   parent1(){
    cout<<"this is parent1 class"<<endl;
   }
};
class parent2{
  public:
   parent2(){
    cout<<"this is parent2 class"<<endl;
   }
};
class child :public parent1,public parent2{
  public:
  child(){
    cout<<"this is child class"<<endl;
  }
};

int main(){
  child c;
}