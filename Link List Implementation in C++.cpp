#include<iostream>
using namespace std;
class node{
  public:
      int value;
      node *next;
};

printnodevalue(class node *head){
 while(head!=NULL){
    cout<<head->value<<" ";
    head=head->next;
 }
}

int main(){
    //Initialize node
 node *head;
 node *one=NULL;
 node *two=NULL;
 node *three=NULL;
 //Allocating memory
 one=new node();
 two=new node();
 three=new node();
 //Assigning value
 one->value = 1;
 two->value = 2;
 three->value=3;
 //connecting nodes
 one->next=two;
 two->next=three;
 three->next=NULL;

 head=one;

 printnodevalue(head);

  return 0;
}
