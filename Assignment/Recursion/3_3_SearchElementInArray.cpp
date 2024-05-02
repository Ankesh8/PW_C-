// search the element in the array and return their index,if element is not present return -1
#include<iostream> 
#include<vector>
using namespace std;
int SearchInArray(vector<int>&v ,int idx,int tgt){
if(idx==v.size()) return -1;
if(v[idx]==tgt) return idx;
return SearchInArray(v,idx+1,tgt);
}
int main(){
  int n=6;
  vector<int>v(n);
  for(int i=0;i<n;i++)
    cin>>v[i];
  int tgt;
  cin>>tgt;
    cout<<SearchInArray(v,0,tgt);
}
