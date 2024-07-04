#include<iostream>
using namespace std;
struct Node{
  int data;
   Node *next,*prev;
};


void createlinkedlist(Node **head_ref,int newdata){
 Node *newnode = new(Node);
 newnode->data = newdata;
 newnode->next = *head_ref;
 *head_ref = newnode;
}

Node* reverselinkedlist(Node *head){
 Node *current = head,*temp=NULL;


 while(current!=NULL){
       Node *temp = new(Node);
       temp = current;
    temp->data = current->data;
    temp->prev = current;
    current = current->next;
 }


 return temp;
}

void print(Node* head_r){
 Node *tempnode = head_r;

     while(tempnode!=NULL){
        cout<<" "<<tempnode->data;
        tempnode = tempnode->next;
     }
}

int main(){
Node *head=NULL,*rhead=NULL;

createlinkedlist(&head,3);
createlinkedlist(&head,2);
createlinkedlist(&head,1);

print(head);
print(head);
rhead=reverselinkedlist(head);
cout<<"\n\n reverse: ";
print(rhead);

 return 0;
}
