#include<iostream>
using namespace std;
struct node{
  int data;
  node *next;
};
int main(){
    node *nptr,*tptr,*head;
 int i,item,n;
 head=NULL;
 cout<<"Enter number of nodes ";
 cin>>n;
 cout<<"Enter item value ";
 for(i=1;i<=n;i++){
   cin>>item;
   nptr = new node();
    nptr->data = item;
    nptr->next = NULL;
    if(head==NULL){
       head = nptr;
       tptr = nptr;
    }else{
       tptr->next = nptr;
       tptr = nptr;
    }
 }
cout<<"Printing node value ";
  tptr=head;
 for(i=1;i<=n;i++){
    cout<<tptr->data<<" ";
    tptr = tptr->next;
 }

 return 0;
}
