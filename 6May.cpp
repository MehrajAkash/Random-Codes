#include<iostream>
using namespace std;
struct Node{
  int data;
  struct Node* next;
};

void insertAtEnd(struct Node** head_ref, int new_data){
   struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
   struct Node* last = *head_ref;

   new_node->data = new_data;
   new_node->next = NULL;

   if(*head_ref==NULL){
    *head_ref = new_node;
    return;
   }

   while(last->next!=NULL) last = last->next;

   last->next = new_node;
   return;
}

void insertAtBeginning(struct Node** head_ref,int new_data){
   struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

   new_node->data = new_data;
   new_node->next = (*head_ref);

   *head_ref = new_node;
}

void insertAfter(struct Node* prev_node,int new_data){
    if(prev_node == NULL){
        cout<<"the given previous node cannot be NULL";
        return;
    }

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void printList(struct Node* node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
    cout<<endl;
}

int main(){
 struct Node* head = NULL;
 insertAtEnd(&head,2);
 insertAtBeginning(&head,1);
 printList(head);
 insertAfter(head->next,3);
  printList(head);
 return 0;
}
