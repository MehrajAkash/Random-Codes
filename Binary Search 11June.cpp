#include<iostream>
using namespace std;
int main(){
 int arr[]={1,5,7,11,25};
 int size,left,right,middle,i,j,k,item;
 size=sizeof(arr)/sizeof(arr[0]);
 cout<<"Enter item value: ";
 cin>>item;

 left = 0; right = 4;


 while(left<right){
      middle = (left+right)/2;

    if(item < arr[middle]){
        right = middle - 1;
    }
    if(item > arr[middle]){
        left = middle + 1;
    }
    if(item==arr[middle]){
        cout<<"position is: "<<middle+1<<endl;
        return 0;
    }
 }








return 0;
}
