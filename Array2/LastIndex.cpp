//find the last occurance of x in the array
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector <int> v;
    v.push_back(6);
    v.push_back(7);
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);

    int x = 6;
    int inx = -1;
    for(int i=v.size()-1;i>=0;i--){
      if(v[i]==x) {
      inx=i;
      break;
      }
    }
   cout<<inx;
}