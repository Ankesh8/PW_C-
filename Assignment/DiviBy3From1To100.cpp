//print all the number between 1 to 100 those are divisible by three
#include<iostream>
using namespace std;
int main(){
  for(int i=1;i<=100;i++){
    if(i%3==0){
      cout<<i<<" ";
    }
  }
}