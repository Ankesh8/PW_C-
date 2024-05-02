#include<iostream> 
#include<vector>
#include<climits>
using namespace std;
int SumOfArray(vector<int>&v ,int idx){
if(idx==v.size()-1) return v[idx];
return v[idx]+SumOfArray(v,idx+1);
}
int main(){
  int n=6;
  vector<int>v(n);
  for(int i=0;i<n;i++)
    cin>>v[i];
    //int sum = 0;
    cout<<SumOfArray(v,0);
}