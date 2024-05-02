#include<iostream> 
#include<vector>
#include<climits>
using namespace std;
int minimum(vector<int>&v ,int idx,int &mini){
if(idx==v.size()) return mini;
mini = min(mini,v[idx]);
return minimum(v,idx+1,mini);
}
int main(){
  int n=6;
  vector<int>v(n);
  for(int i=0;i<n;i++)
    cin>>v[i];
    int mini = INT_MAX;
    cout<<minimum(v,0,mini);
}