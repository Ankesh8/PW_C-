#include<iostream>
using namespace std;

// int maze(int sr,int sc,int er,int ec){
//   if(sr>er || sc>ec) return 0;
//   if(sr==er || sc==ec) return 1;
//   int rightways = maze(sr,sc+1,er,ec);
//   int downways = maze(sr+1,sc,er,ec);
//   int totalways  = rightways +downways;
//   return totalways;
// }

//using only two parameter
int maze2(int row,int col){
  if( row<1 || col<1) return 0;
  if(row==1 && col==1) return 1;
  int rightways = maze2(row,col-1); //rightways
  int downways = maze2(row-1,col); //downways
  int totalways  = rightways +downways;
  return totalways;
}
void printpath(int row,int col,string s){
  if(row<1 || col<1) return;
  if(row==1  && col==1){
    cout<<s<<endl;
    return;
  } 
  printpath(row,col-1,s+'R');
  printpath(row-1,col,s+'D');
  
}
int main(){
  //cout<<maze(0,0,2,2);
  cout<<maze2(3,3);
  cout<<endl;
  printpath(3,3,"");
}