#include<iostream>
using namespace std;
struct node{
  int data;
   node *next;
};
node *tptr,*nptr,*lptr,*head=NULL;
int i,item,n;

void createLinkedList(node *head){
  nptr = new node();
  cout<<"Enter number of nodes: ";
  cin>>n;
  cout<<"Enter nodes value: ";
  for(i=1;i<=n;i++){
        cin>>item;
    nptr = new node();
    nptr->data = item;
    nptr->next = NULL;
    if(head==NULL){
        head = nptr;
        tptr = nptr;
    }
    else{
        tptr->next = nptr;
        tptr = nptr;
    }
  }

}

void printLinkedList(){
  tptr=head;
  while(tptr!=NULL){
    cout<<tptr->data<<" ";
    tptr = tptr->next;
  }
}

int main(){


  head=NULL;
  createLinkedList(head);
  printLinkedList();


  return 0;
}
