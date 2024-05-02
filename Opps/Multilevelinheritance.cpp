#include<iostream>
using namespace std;
class parent{
  public:
   parent(){
    cout<<"this is parent class"<<endl;
   }
};
class child :public parent{
  public:
  child(){
    cout<<"this is child class"<<endl;
  }
};
class grandchild: public child{
  public:
  grandchild(){
    cout<<"this is grandchild"<<endl;
  }
};
int main(){
  grandchild g;
}