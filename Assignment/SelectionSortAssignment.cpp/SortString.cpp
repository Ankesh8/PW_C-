#include<iostream>
#include<string>
using namespace std;
int main(){
  string arr[5] ={"ankes","vishal","ashish","alok","prabhat"};
  int n = 5;
  for(int i=0;i<5;i++){
    cout<<arr[i]<<endl;
  }
  cout<<endl;
  //bubble sort 
  for(int i=0;i<n-1;i++){
    int flag =true;
    for(int j=0;j<n-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        flag =false;
      }
    }
    if(flag==true) break;
  }
    for(int i=0;i<5;i++){
     cout<<arr[i]<<endl;
  }
  cout<<endl;
}