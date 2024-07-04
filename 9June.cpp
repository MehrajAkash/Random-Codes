#include<iostream>
using namespace std;
struct Node{
  int data;
  Node* next;
};

void push(Node** head_ref,int new_data){
   Node* new_node = new Node();

   new_node->data = new_data;

   new_node->next = *head_ref;

   *head_ref = new_node;
}

void insertAfter(Node* temp,int new_data){
    Node* new_node = new(Node);
    new_node->data = new_data;
    new_node->next = temp->next;
    temp->next = new_node;
}
/*
void insertBefore(Node* temp,int new_data){
    Node* new_node = new(Node);
    new_node->data = new_data;
    new_node->next = temp;
    temp->next = new_node;
}
*/
void insertEnd(Node** head_ref,int new_data){
       Node *new_node = new Node();
       Node *temp = new Node();
       temp = *head_ref;
       new_node->data = new_data;

       while(temp->next!=NULL){
         temp = temp->next;
       }
       temp->next = new_node;
       new_node->next=NULL;

}

void sortLinkedList(Node** head_ref){
  Node* current = *head_ref,*fcurrent = NULL;
  Node* tnode = *head_ref;

 int temp;
  if(current==NULL)
    return;
  else{
        while(tnode != NULL){
                current = *head_ref;
                fcurrent = current->next;
            while(fcurrent!=NULL){
                if(current->data > fcurrent->data){
                  temp = current->data;
                  current->data = fcurrent->data;
                  fcurrent->data = temp;
                }
             fcurrent = fcurrent->next;
             current = current->next;
            }
        tnode = tnode->next;
       }
  }
}

void printLinkedList(Node* temp){
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
  }
  cout<<"NULL \n";
}

int main(){
Node *head = NULL;


push(&head,3);
push(&head,4);
push(&head,101);

cout<<"Print linked list: ";
printLinkedList(head);

insertAfter(head->next,5);//1
cout<<"After inserting linked list: ";
printLinkedList(head);

/*insertBefore(head->next->next,10);//1
cout<<"Before inserting linked list: ";
printLinkedList(head); */

insertEnd(&head,1);

cout<<"After inserting at the end Linked list: ";
printLinkedList(head);

sortLinkedList(&head);

cout<<"Sorted linked list: ";
printLinkedList(head);

 return 0;
}
