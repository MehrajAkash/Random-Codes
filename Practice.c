#include<stdio.h>
//create a node
struct node{
 int value;
 struct node* next;
};

void printnodevalue(struct node *p){
  while(p!=NULL){
    printf("%d ",p->value);
    p=p->next;
  }
}

int main(){
    //Initialize node
struct node *head;
struct node *one=NULL;
struct node *two=NULL;
struct node *three=NULL;
struct node *four=NULL;
struct node *five=NULL;
//allocating nodes
one=malloc(sizeof(struct node));
two=malloc(sizeof(struct node));
three=malloc(sizeof(struct node));
four=malloc(sizeof(struct node));
five=malloc(sizeof(struct node));
//assigning value
one->value = 1;
two->value =2;
three->value =3;
four->value = 4;
five -> value=5;
//connecting nodes
one->next=two;
two->next=three;
three->next=four;
four->next=five;
five->next=NULL;

head=one;

printnodevalue(head);

  return 0;
}
