#include<iostream>//array sorting
using namespace std;
int main()
{
    cout<<"Array sorting"<<endl;
 int arr[] = {1,4,7,0,5};
 int sitem = 4;
    for(int i=0; i<5; i++){
      for(int j=i+1; j<5;j++){
         if(arr[j]<arr[i]){
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
    }

   for(int k=0; k<5;k++){
        //cout<<"Array Pringting \n";
    cout<<arr[k]<<" ";
   }

  return 0;
}
