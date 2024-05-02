#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
  string str = "Ankesh is a good coder : ";
  stringstream ss (str);
  string temp;
  while(ss>>temp){
    cout<<temp<<endl;
  }
}