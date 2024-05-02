#include<iostream>
using namespace std;

class node{
public:
  int data;
  node *next;
      node(int n){
      data = n;
      next = NULL;
      }
};
class linkedlist{
  public:
  node *head,*tail;
  linkedlist(){
    head = NULL;
    tail = NULL;
  }
  
   void display(){
    node *temp  =head;
      while(temp){
      cout<<temp->data<<" ";
      temp = temp->next;
      }
      cout<<endl;
   }
   void addFirst(int val){
    node *temp = new node(val);
    if(head==NULL)head = temp;
    else{
      temp->next  =head;
      head= temp;
    }
    if(tail ==NULL) tail = head;
   }
   void addLast(int val){
    node *temp = new node(val);
    if(tail==NULL)tail=temp;
    else{
      tail->next =temp;
      tail = temp;
    }
    if(head==NULL) head =tail;
   }
   void addAtIndex(int idx,int val){
    if(idx==0) addFirst(val);
    else{
      idx--;
      node *temp =head;
      while(idx--){
        temp = temp ->next;
      }
      node *newnode  = new node(val);
      newnode->next  = temp->next;
      temp->next = newnode;
    }
   }
   void getAtIndex(int idx){
      if(idx ==0) cout<<head->data;
      else{
        node *temp = head;
        while(idx--)temp= temp->next;
        cout<<temp->data<<endl;
      }
   }
   void deleteAtIndex(int idx){
    if(idx==0) head= head->next;
    else{
      node *prev =NULL,*curr =head;
      while(idx--){
        prev = curr;
        curr = curr->next;
      }
      prev->next =curr->next;
      curr->next =NULL;
    }
   }
};
int main(){
  linkedlist l1;
  l1.addFirst(1);
  l1.addFirst(2);
  l1.addFirst(3);
  l1.addFirst(4);
  l1.addLast(5);
  l1.addAtIndex(3,9);
  l1.display();
  l1.getAtIndex(2);
  l1.deleteAtIndex(4);
  l1.display();
}