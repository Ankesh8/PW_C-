//wap to count the minimum number of notes in a given amount using the switch statement.
#include<iostream>
using namespace std;
int main(){
  int amount;
  int n1,n2,n5,n10,n20,n50,n100,n200,n500;
  n1=n2=n5=n10=n20=n50=n100=n200=n500=0;
  cout<<"enter the amount : ";
  cin>>amount;
  switch (amount >= 500) {
  case 1:
      n500 += amount/500;
      amount -= n500*500;
    break;
  }
  switch (amount >= 200) {
  case 1:
      n200 += amount/200;
      amount -= n200*200;
    break;
  }
  switch (amount >= 100) {
  case 1:
      n100 += amount/100;
      amount -= n100*100;
    break;
  }
  switch (amount >= 50) {
  case 1:
      n50 += amount/50;
      amount -= n50*50;
    break;
  }
  switch (amount >= 20) {
  case 1:
      n20 += amount/20;
      amount -= n20*20;
    break;
  }
  switch (amount >= 10) {
  case 1:
      n10 += amount/10;
      amount -= n10*10;
    break;
  }
  switch (amount >= 5) {
  case 1:
      n5 += amount/5;
      amount -= n5*5;
    break;
  }
  switch (amount >= 2) {
  case 1:
      n2 += amount/2;
      amount -= n2*2;
    break;
  }
    switch (amount >= 1) {
  case 1:
      n1 += amount;
      amount -= n1;
    break;
  }
  cout<<"Notes of 500 is : "<<n500<<endl;
  cout<<"Notes of 200 is : "<<n200<<endl;
  cout<<"Notes of 100 is : "<<n100<<endl;
  cout<<"Notes of 50 is : "<<n50<<endl;
  cout<<"Notes of 20 is : "<<n20<<endl;
  cout<<"Notes of 10 is : "<<n10<<endl;
  cout<<"Notes of 5 is : "<<n5<<endl;
  cout<<"Notes of 2 is : "<<n2<<endl;
  cout<<"Notes of 1 is : "<<n1<<endl;
}