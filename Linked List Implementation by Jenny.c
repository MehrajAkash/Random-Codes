#include<stdio.h>
int main(){
 struct node{
  int data;
  struct node *next;
 };
 struct node *head,*newnode,*temp;
 head=0;
 int choice=2;
 while(choice){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data ");
    scanf("%d",&newnode->data);
    newnode->next=0;

    if(head==0){
        head=temp=newnode;
    }else{
     temp->next = newnode;
     temp=newnode;
    }
    printf("DO you want to continue(0,1)?");
    scanf("%d",&choice);
 }

 temp = head;
 while(temp!=0){
    printf("%d ",temp->data);
    temp = temp->next;
 }
}
