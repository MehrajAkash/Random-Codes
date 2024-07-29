#include<stdio.h>
void swap(int *p,int *q){
   int temp = *p;
   *p = *q;
   *q = temp;
}

void heapSort(int arr[],int n){
    //Build Max Heap
    for(int i=n/2 - 1;i>=0;i--){
         heapify(arr,n,i);
     }

    for(int i = n-1;i>=0;i--){
         swap(&arr[0],&arr[i]);
         heapify(arr,i,0);
    }

}

void heapify(int arr[],int n,int i){
     int large = i;
     int left = 2*i+1, right = 2*i+2;

     if(left<n && arr[left]>arr[large]){
        large = left;
     }
     if(right<n && arr[right]>arr[large]){
        large = right;
     }

     if(large!=i){
        swap(&arr[i],&arr[large]);
        heapify(arr,n,large);
     }
}

void printArray(int arr[],int n){
   for(int i=0;i<n;i++){
     printf("%d ",arr[i]);
   }


   printf("\n");
}

int main(){
     int arr[] = {1, 12, 9, 5, 6, 10};
 int n = sizeof(arr)/sizeof(arr[0]);

  heapSort(arr,n);
  printArray(arr,n);

  return 0;
}
