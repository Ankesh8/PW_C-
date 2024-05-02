#include<iostream>
using namespace std;
class Node{
  public:
  int val;
  Node *next;
  Node(int val){
    this->val= val;
    this->next = NULL;
  }
};

//Recursivly displayed
 void displayres(Node *head){
  if(head ==NULL ) return;
   cout<<head->val<<" ";
   displayres(head->next);
 }
// void display(Node *head){
//   Node *temp = head;
//  while (temp !=NULL){
//     cout<<temp->val<<" ";
//     temp = temp->next;
//  }
//  cout<<endl;
// }

//Reverse Display
void reversedisplay(Node *head){
  if(head==NULL) return;
  reversedisplay(head->next);
  cout<<head->val<<" ";
}
int size(Node *head){
  Node *temp = head;
  int n=0;
  while(temp !=NULL){
      n++;
      temp = temp->next;
  }
  return n;
}
int main(){
 Node *a  = new Node(10);
 Node *b  = new Node(20);
 Node *c  = new Node(30);
 Node *d  = new Node(40);
 Node *e  = new Node(50);
 a->next=b;
 b->next=c;
 c->next=d;
 d->next=e;
 // display(a);
// cout<<size(a);
// displayres(a);
reversedisplay(a);

}