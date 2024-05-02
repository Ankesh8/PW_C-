#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
  string str = "ankesh is a good coder ,ankesh will get a good package in campus placement";
  string temp;
  stringstream ss(str);
  vector<string>v;
  while(ss>>temp){
     v.push_back(temp);
  }

  sort(v.begin(),v.end());
  int maxcount =1;
  int count =1;
  for(int i=0;i<v.size();i++){
    if(v[i]==v[i-1]) count++;
    else count =1;

    maxcount = max(maxcount,count);
  }
  count =1;
  for(int i=0;i<v.size();i++){
    if(v[i]==v[i-1]) count++;
    else count =1;
    if(count==maxcount){
      cout<<v[i]<<" "<<maxcount<<endl;
    }
  }
}