//check the two string are anagram or not
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isAnagram(string s,string t){
        if(s.size() != t.size()) return false;
        int cnt[26] = {0};
        int n =s.size();
        for(int i =0;i<n;i++){
          cnt[s[i] -'a']++;
          cnt[t[i] -'a']--;
        }
        int fl=0;
        for(int i=0;i<n;i++){
          if(cnt[i] != 0){
             return false;
          }
        }
        return true;
}



int main(){
  string s;
  string t;
  cin>>s;
  cin>>t;
  isAnagram(s,t)?cout<<"yes":cout<<"No";
  // sort(s1.begin(),s1.end());
  // sort(s2.begin(),s2.end());
  //  if(s1==s2) cout<<"string is anagram";
  //  else cout<<"string is not anagram";

}