#include<iostream>
using namespace std;
int main(){
int arr[5]={6,1,3,-1,2};

for(int j=1;j<5;j++){
     int i=j;
    while(arr[i-1]>arr[i] && i>=1){
        int temp = arr[i-1];
        arr[i-1] = arr[i];
        arr[i] = temp;
        i--;

    }
    for(int k=0;k<5;k++)
        cout<<arr[k]<<" ";
    cout<<endl;
}

for(int j=0;j<5;j++)
  cout<<arr[j]<<" ";



return 0;
}
