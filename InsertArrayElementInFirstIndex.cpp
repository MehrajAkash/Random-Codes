#include<iostream>
using namespace std;
int *InsertF(int arr[],int v,int n,int pos){
  for(int i=n;i>=pos;i--)
         arr[i]=arr[i-1];

  arr[pos-1]=v;
    return arr;
}
int *InsertL(int arr[],int v,int n,int pos){
  for(int i=0;i<pos;i++)
         arr[i]=arr[i+1];

  arr[pos-1]=v;
    return arr;
}

int main(){
 int arr[10],v=50,n=10,pos=1;

 for(int i=0;i<n;i++)
    arr[i]=i+1;

 for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
   cout<<endl;

InsertF(arr,v,n,pos);

for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
 cout<<endl;

 v=60; pos=10;
 InsertL(arr,v,n,pos);

 for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
 cout<<endl;
 return 0;
}
