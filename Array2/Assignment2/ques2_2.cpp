//find the third largest element in the array
#include<iostream>
#include<climits>
using namespace std;
void thirdgreatest(int a[],int n){
  int max1 =INT_MIN; int max2 =INT_MIN; int max3 =INT_MIN;
  for(int i =0;i<n;i++){
    if(a[i]>max1){
      max3 =max2;
      max2 = max1;
      max1 = a[i];
    }
    else if(a[i]>max2){
      max3 = max2;
      max2 = a[i];
    }
    else if(a[i]>max3){
      max3 =a[i];
    }
  }
  if(max1==INT_MIN) cout<<"no maximum is found ";
  else cout<<max1<<" ";
  if(max2==INT_MIN) cout<<"no 2nd maximum is found ";
  else cout<<max2<<" ";
  if(max3==INT_MIN) cout<<"no 3rd maximum is found ";
  else cout<<max3<<" ";
}

int main(){
int n;
cout<<"Enter the size of the array is : ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
thirdgreatest(arr,n);
}