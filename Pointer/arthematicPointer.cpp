#include<iostream>
using namespace std;
int main(){
int x = 4;
int *ptr = &x;
cout<<*ptr<<endl;
//*ptr = *ptr +1; //or
(*ptr)--;
cout<<*ptr<<endl;
}
