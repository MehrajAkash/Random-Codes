#include<bits/stdc++.h>
using namespace std;
struct node{
    struct node *link;
    int data;
};

int main(){

    struct node *head=NULL, *newnode=NULL, *temp=NULL;

    cout<<"Number of node: ";
    int n; cin>>n;
    int value;

    for(int i=1; i<=n; i++){
        cin>>value;
        newnode = new node;
        newnode->data = value;
        newnode->link = NULL;

        if(head==NULL){
            head = newnode;
        }
        else{
            newnode->link = head;
            head = newnode;
        }

    }

    temp = head;
    cout<<"linked list traversal: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }



 return 0;
}
