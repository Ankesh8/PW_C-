#include<iostream>
#include<vector>
using namespace std;
void ArrayReverse(vector<int> &v,int idx){
  if(idx==v.size()) return;
  ArrayReverse(v,idx+1);
  cout<<v[idx]<<" ";
}
int main(){
 int n =5;
 vector<int>v(n);
 for(int i=0;i<n;i++) cin>>v[i];
 ArrayReverse(v,0);
}