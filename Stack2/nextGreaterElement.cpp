#include<iostream>
#include<stack>
using namespace std;
int main(){
  int arr[] = {3,1,2,7,4,6,2,3};
  int n =sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  //using stack :pop ans push
  //next greater element in array
  int nge[n];
  //using a stack :pop,ans,push
  stack<int>st;
  nge[n-1]  =-1;
  st.push(arr[n-1]);
  for(int i= n-2;i>=0;i--){
    while(st.size()>0 && st.top()<=arr[i]){
      st.pop();
    }
    // mark the ans in nge array
    if(st.size()==0) nge[i] = -1;
    else nge[i] = st.top();
    //push the arr[i]
    st.push(arr[i]);
  }
  for(int i=0;i<n;i++){
    cout<<nge[i]<<" ";
  }
  cout<<endl;
}