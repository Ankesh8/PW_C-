//count the number of triplets whose sum is equal to the sum of given value x
#include<iostream>
using namespace std;
int triplets(int a[],int n,int x){
  int count=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
        if(a[i]+a[j]+a[k]==x) count ++;
      }
    }
  }
  return count;
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
int x;
cin>>x;
cout<<triplets(a,n,x);
}