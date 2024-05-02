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
int main(){
  child c;
}