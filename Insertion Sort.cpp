#include<iostream>
using namespace std;
int main(){
  int arr[]={8,5,-1,9,2};
int i,j,size = sizeof(arr)/sizeof(arr[0]);

for(i=1;i<size;i++){
    int value = arr[i];
    j=i-1;
    while(j>=0 && arr[j] > value){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = value;
}

for(i=0;i<size;i++)
    cout<<arr[i]<<" ";

return 0;
}
