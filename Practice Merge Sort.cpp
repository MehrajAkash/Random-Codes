#include<bits/stdc++.h>
using namespace std;

int arr[]={0, 8, 5, 4, 1, 15, 3};

void mergee(int left, int mid, int right){

    int p = left;
    int q = mid+1;
    int len = right-left+1;

    vector<int> v(len);
    int k=0;

    for(int i=left; i<=right; i++){

        if( p > mid ){
            v[k] = arr[q];
            k++, q++;
        }
        else if( q > right ){
            v[k] = arr[p];
            k++, p++;
        }
        else if( arr[p] <= arr[q] ){
            v[k] = arr[p];
            k++, p++;
        }
        else{
            v[k] = arr[q];
            k++, q++;
        }

    }

    k=0;
    for(int i=left; i<=right; i++){
        arr[i] = v[k];
        k++;
    }

}

void mergeSort(int l, int r){
    if(l==r)return;

    int mid = (l + r)/2;
    mergeSort(l, mid);
    mergeSort(mid+1, r);
    mergee(l,mid,r);

    cout<<endl;
    for(int i=1; i<=6; i++)
        cout<<arr[i]<<" ";

}

int main(){

    mergeSort( 1, 6 );


 return 0;
}
