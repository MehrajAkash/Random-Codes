#include<iostream>
using namespace std;

int *insertV(int arr[],int n,int pos,int v){

  for(int i=n;i>=pos;i--)
    arr[i]=arr[i-1];

    arr[pos-1]=v;
 return arr;
}

int main(){

 int arr[20],pos,n=10,value;
 for(int i=0;i<n;i++)
    arr[i]=i+1;

 for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

 value=50; pos=4;
 insertV(arr,n,pos,value);

 for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

return 0;
}
