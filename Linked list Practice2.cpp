#include<iostream>
using namespace std;
struct node{
  int data;
   node *next;
};
int main(){
    int n,item,i;
 node *nptr,*tptr,*list;
 list=NULL;
 cout<<"Enter Nodes number: ";
 cin>>n;

  cout<<"Enter item value: ";
 for(i=1;i<=n;i++){
        cin>>item;
    nptr = new(node);

    nptr->data = item;
    nptr->next = NULL;
    if(list==NULL){
        list = nptr;
        tptr = nptr;
    }else{
        tptr->next = nptr;
        tptr = nptr;
    }
 }
 cout<<"Print the value: ";
tptr=list;
 for(i=1;i<=n;i++)
 {
     cout<<tptr->data<<" ";
     tptr = tptr->next;
 }
 cout<<endl<<endl;
//Insert a node
cout<<"Enter Nodes position: ";
 cin>>n;
 cout<<"Enter item value: ";
 cin>>item;
 tptr=list;
 int j=0;
 while(j<n){
    tptr=tptr->next; j++;
 }
 nptr = new(node);
 nptr->data =item;
 nptr->next = tptr->next;
 tptr->next = nptr;

 cout<<"Print the value again: ";
tptr=list;
 for(i=1;i<=6;i++)
 {
     cout<<tptr->data<<" ";
     tptr = tptr->next;
 }



  return 0;
}
