#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,8,9};
    int left=0,right=4,sitem=1;
    int middle;

   while(left<=right){
         middle = (right+left)/2;//3 (4+7)2=5
        if(arr[middle]==sitem){
            cout<<"Item found at position "<<middle+1<<endl;
            return 0;
        }
        else if(sitem > arr[middle]){
            left=middle+1;//3+1=4 5+1=6

        }else{
           right = middle - 1;
         }
   }

   printf("Item not found \n");



     return 0;
}
