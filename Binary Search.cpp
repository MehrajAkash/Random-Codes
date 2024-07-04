#include<iostream>//Binary search
using namespace std;
int main(){
  int arr[]={-2,2,4,6,8,10};
  int left=0,right=4,middle,sitem;
  cout<<"Enter item value";
  cin>>sitem;
  middle = (left+right)/2;
 if(arr[middle]==sitem){
    cout<<"Item founded 1 at index number "<<middle<<endl;
 }
 else if(arr[middle] < sitem){
    left = middle;
    right = 5;
    middle = (left+right)/2;
    if(arr[middle]==sitem){
    cout<<"Item founded 2 at index number "<<middle<<endl;
    }
    do{
             left++;
        right = 5;
        middle = (left+right)/2;

        if(arr[middle]==sitem){
         cout<<"Item founded 3 at index number "<<middle<<endl;
         return 0;
        }
    }while(middle<=5);
 }


  else if(arr[middle] > sitem){
    left = 0;
    right = middle;
    middle = (left+right)/2;
    if(arr[middle]==sitem){
    cout<<"Item founded 4 at index number "<<middle<<endl;
       return 0;
    }
    do{

        right--;
        middle = (left+right)/2;   // int arr[]={-2,2,4,6,8,10};

        if(arr[middle]==sitem){
         cout<<"Item founded 5 at index number "<<middle<<endl;
         return 0;
        }
    }while(middle<=5);
 }


 return 0;
}
