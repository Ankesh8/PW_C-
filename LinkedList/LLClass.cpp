#include<iostream>
using namespace std;
class Node{  //user defind data type
   public:
   int val;
   Node *next;
   Node(int val){
    this->val=val;
    this->next=NULL;
   }
};
class LinkedList{ //user defind data structure
  public:
  Node *head;
  Node *tail;
  int size;
   LinkedList(){
     head =tail =NULL;
     size = 0;
   }
   void insertAtTail(int val){
    Node *temp  =new Node(val);
    if(size==0) head =tail = temp;
    else{
      tail->next=temp;
      tail = temp;
    }
    size++;
   }
   void insertAtHead(int val){
    Node *temp  =new Node(val);
    if(size==0) head =tail = temp;
    else{
     temp->next =head;
     head = temp;
    }
    size++;
   }
   void insertAtIndex(int idx,int val){
    if(idx<0 || idx>size) cout<<"invalid Index"<<endl;
    else if(idx==0) insertAtHead(val);
    else if(idx==size) insertAtTail(val);
    else{
      Node *t = new Node(val);
      Node *temp =head;
      for(int i=1;i<=idx-1;i++){
        temp = temp->next;
      }
      t->next =temp->next;
      temp->next = t;
      size++;
    }
   }

   int getAtIdx(int idx){
    if(idx<0 || idx>=size){
      cout<<"Invalid Idx";
      return -1;
    }
    else if(idx==0) return head->val;
    else if(idx==size-1) return tail->val;
    else{
      Node *temp =head;
      for(int i=1;i<=idx;i++){
        temp = temp->next;
      }
     return temp->val;
    }
   }
   void deleteAtHead(){
    if(size==0){
      cout<<"list  is empty";
      return;
    }
    head = head->next;
    size--;
   }
   void deleteAtTail(){
     if(size==0){
      cout<<"list  is empty";
      return;
    }
    Node *temp =head;
    while(temp->next!=tail){
      temp = temp->next;
    }
    temp->next =NULL;
    tail= temp;
    size--;
   }

   void deleteAtIndex(int idx){
    if(size==0){
      cout<<"list is empty";
    }
    else if(idx<0 || idx>=size){
      cout<<"Invalid Idx";
      return ;
    }
    else if(idx==0) return deleteAtHead();
    else if(idx==size-1) return deleteAtTail();
    else{
      Node *temp =head;
      for(int i=1;i<=idx-1;i++){
        temp =temp->next;
      }
      temp->next = temp->next->next;
      size--;
    }
   }
   void display(){
    Node *temp = head;
    while(temp!=NULL){
      cout<<temp->val<<" ";
      temp = temp->next;
    }
    cout<<endl;
   }
};
int main(){
  LinkedList l1;
  l1.insertAtTail(10);
  l1.display();
  l1.insertAtTail(20);
  l1.insertAtTail(30);
  l1.insertAtTail(40);
  l1.display();
  l1.insertAtHead(50);
  l1.display();
  l1.insertAtIndex(4,45);
   l1.display();
 cout<<l1.size<<endl;
 cout<<l1.getAtIdx(4)<<endl;
 l1.display();
 l1.deleteAtHead();
  l1.display();
  l1.deleteAtTail();
  l1.display();
  l1.deleteAtIndex(2);
  l1.display();
}