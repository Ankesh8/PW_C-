#include<iostream>
using namespace std;
class parent{
  public:
   parent(){
    cout<<"this is parent class"<<endl;
   }
};
class child1 :public parent{
  public:
  child1(){
    cout<<"this is child1 class"<<endl;
  }
};
class child2: public parent{
  public:
  child2(){
    cout<<"this is child2"<<endl;
  }
};
int main(){
  child1 c;
  child2 d;
}