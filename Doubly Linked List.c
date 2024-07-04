#include<stdio.h>
struct node{
  int data;
  struct node* link;
  struct node* prev;
};

void createDoubly(struct node** head_ref,int new_data){
  struct node* new_node = malloc(sizeof(struct node));
  new_node->link = NULL;
  new_node->data = new_data;
  new_node->prev = NULL;

  new_node->link = *head_ref;
  *head_ref = new_node;
}

void print(struct node* temp){
   while(temp!=NULL){
     printf("%d ",temp->data);
     temp = temp->link;
   }
}

int main(){
 struct node* head=NULL;
 createDoubly(&head,5);
 createDoubly(&head,10);
    print(head);

return 0;
}
