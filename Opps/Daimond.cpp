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
    cout<<"this is child2 class"<<endl;
  }
};
class grandchild: public child1, public child2{
  public:
  grandchild(){
    cout<<"this is grandchild"<<endl;
  }
};
int main(){
  grandchild g;
}