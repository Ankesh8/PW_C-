#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector <int> v; // size initialize implecitly v(5) means size 5 and capacity iS also 5
  //take input in vector for size 5
  for(int i=0;i<5;i++){  // v.size() method is used when is implecitly defind
    int x;
    cin>>x;
      v.push_back(x);
  }
  //print the element of the vector
  for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
  }
}