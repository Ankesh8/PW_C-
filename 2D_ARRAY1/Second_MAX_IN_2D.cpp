//find the second largest element in the array
#include<iostream>
#include<climits>
using namespace std;
int main(){
  int m;
  cout<<"enter the size of the rows : ";
  cin>>m;
  int n;
  cout<<"enter the size of column : ";
  cin>>n;
  int arr[m][n];
  for(int i = 0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
   int max = INT_MIN;
   int smax = INT_MIN;
   for(int i = 0;i<m;i++){
    for(int j=0;j<n;j++){
      if(max < arr[i][j])
      max = arr[i][j];
    }
  }
  cout<<"largest element in the array is : "<<max<<endl;
   for(int i = 0;i<m;i++){
    for(int j=0;j<n;j++){
      if(arr[i][j]!= max && smax <arr[i][j]){
        smax  =arr[i][j];
      }
    }
  }
  cout<<"second largest element in the array is "<<smax;
}