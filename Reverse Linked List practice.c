#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node *link;
};

void push(struct Node **head_ref,int new_data){
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->link = *head_ref;
  *head_ref = new_node;
}

void reverse(struct Node** head_ref){
    struct Node *current = *head_ref;
    struct Node *prev = NULL;
    struct Node *next = NULL;
    while(current!=NULL){
    next = current->link;
    current->link = prev;
    prev = current;
    current = next;
    }
   *head_ref = prev;

}

void print(struct Node *temp){
   while(temp!=NULL){
     printf("%d->",temp->data);
     temp = temp->link;
   }
   printf("NULL\n");
}

int main(){
struct Node *head = NULL;

push(&head,20);
push(&head,30);
push(&head,40);

print(head);
reverse(&head);
print(head);

return 0;
}
