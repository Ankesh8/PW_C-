//wap to reverse the array only specify part
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &a){
  for(int i=0;i<a.size();i++){
    cout<<a[i]<< " ";
  }
  cout<<endl;
}

 //reverse part
  void Reversepart(int i,int j,vector<int> &v){
    while(i<=j){
      int temp = v[i];
      v[i] = v[j];
      v[j] = temp;
      i++;
      j--;
    }
    return;
  }

int main(){
  vector<int> v;
  v.push_back(6);
  v.push_back(7);
  v.push_back(8);
  v.push_back(9);
  display(v);
  Reversepart(0,2,v);
  display(v);
}