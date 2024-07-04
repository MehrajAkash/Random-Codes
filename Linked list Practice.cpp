#include<iostream>
using namespace std;
class Node{
    public:
  Node* next;
  int data;
};

void insertAtFront(Node** head_ref,int new_data){
  Node* new_node = new Node();
  new_node -> data = new_data;
  new_node -> next = *head_ref;
  *head_ref = new_node;
}

void printList(Node* head){
  while(head!=NULL){
    cout<<head->data<<" ";
    head = head->next;
  }
}

Node* removeFirstNode(Node* head){
   if(head==NULL)
    return NULL;

   Node* temp = head;
   head = head->next;

   delete  temp;
   return head;
}

int main(){
 Node* head = NULL;

 insertAtFront(&head,4);
 insertAtFront(&head,3);
 insertAtFront(&head,2);
 insertAtFront(&head,1);

 printList(head);
 cout<<endl;
 head = removeFirstNode(head);
 printList(head);

return 0;
}

