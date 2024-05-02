#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack<int>s;
 
  cout<<s.size()<<endl;
  s.push(10);
  s.push(20);
  s.push(30);
  cout<<s.size()<<endl;
   stack<int>temp;
  while(s.size()>0){
  //cout<<s.top()<<" ";
     temp.push(s.top());
     s.pop();
  }
    while(temp.size()>0){
      cout<<temp.top()<<" "<<endl;
    s.push(temp.top());
    temp.pop();
  }
  cout<<endl<<s.top();
}