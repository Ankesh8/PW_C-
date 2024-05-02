//Move all the zero element to the end of the loop
#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++) cin>>v[i];

   int j=0;
   for(int i=0;i<n;i++){
    if(v[i]!=0){
      swap(v[i],v[j]);
      j++;
    }
   }
   cout<<"desired output is :"<<endl;
   for(int i=0;i<n;i++) cout<<v[i]<<" ";

}