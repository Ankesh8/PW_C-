#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector <int> v; // not need to mention the size of the vector
  // inserting input do not use []

  v.push_back(9);

  cout<<"Capacity of vector is : "<<endl;
  cout<<v.capacity()<<endl;

  v.push_back(1);

  cout<<v.capacity()<<endl;

  v.push_back(2);

  cout<<v.capacity()<<endl;

  v.push_back(5);

  cout<<v.capacity()<<endl;
  cout<<"size of vector is : "<<endl;
   
   cout<<v.size()<<endl;
   
  //if we want to update /access the element of the vector
  cout<<v[0]<<" ";
  cout<<v[1]<<" ";
  cout<<v[2]<<" ";
  cout<<v[3]<<" ";


}