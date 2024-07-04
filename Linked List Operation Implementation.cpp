#include<iostream>
using namespace std;
struct node{
    int data;
  node *next;
};

int main(){
int n,i,item,value,num;
node *nptr,*tptr,*list,*lptr;
cout<<"Enter Number of nodes: ";
cin>>n;
list=NULL;
cout<<"Enter nodes value: ";
for(i=1;i<=n;i++){
    nptr = new node();//creating nodes
    cin>>item;
    nptr->data = item;//assigning data into nodes
    nptr->next = NULL;
    if(list==NULL){
        list = nptr;
        tptr = nptr;
    }else{
       tptr->next = nptr;
       tptr = nptr;
    }
}

cout<<"\n print nodes value: ";
tptr = list;
for(i=1;i<=n;i++){
    cout<<tptr->data<<" ";
    tptr = tptr->next;
}

//Inserting new node
cout<<"\n Enter serial Number of node after new node will be assigned: ";
cin>>num;
cout<<"\n Enter new node value:";
cin>>item;
tptr=list;
for(int j=0;j<num;j++)
    tptr=tptr->next;

nptr = new node();
n++;
nptr->data = item;
nptr->next = tptr->next;
tptr->next = nptr;

cout<<"\n After inserting new nodes value are: ";
tptr = list;
for(i=1;i<=n;i++){
    cout<<tptr->data<<" ";
    tptr = tptr->next;
}

//Inserting new node at begining
//tptr = list;
nptr = new node();
n++;
cout<<"\n Inserting new node at begining \n Enter node value: ";
cin>>item;
nptr->data = item;
nptr->next = list;//tptr=list=head;
list = nptr;
cout<<"After inserting at begining nodes value are: ";
tptr=list;
while(tptr!=NULL){
    cout<<tptr->data<<" ";
    lptr = tptr;// lptr = taking last node address
    tptr = tptr->next;
}

//tptr=NULL;
// Inserting node at the last position;
nptr = new node();
n++;
cout<<"\n Inserting new node at last position. \n Enter node value: ";
cin>>item;
nptr->data = item;
nptr->next = NULL;
lptr->next = nptr;
cout<<"\n Printing all nodes value: ";
tptr=list;
for(i=1;i<=n;i++){
    cout<<tptr->data<<" ";
    tptr = tptr->next;
}


 return 0;
}
