//create a 2d array with 5 rows and 5 cols and store 10 in every place
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<vector<int>>v(5,vector<int>(5,10));
  for(int i=0;i<v.size();i++){
    for(int j=0;j<v.size();j++){
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }
}