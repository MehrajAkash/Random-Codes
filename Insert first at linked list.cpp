#include<bits/stdc++.h>
using namespace std;

struct node{
   int data;
   node *next;
};

void insertAtFront(node** head_ref,int item){
  node *new_node = new node();
  new_node->data = item;
  new_node->next = *head_ref;
 // cout<<*head_ref<<endl;
  *head_ref = new_node;

}

void print(node* head){
  while(head!=NULL){
    cout<<head->data<<" ";
    head = head->next;
  }
}

int main(){
  node *head = NULL;

  insertAtFront(&head,1);
  //cout<<"in main "<<head<<endl;
  insertAtFront(&head,2);
  insertAtFront(&head,3);

  print(head);
return 0;
}
