#include<bits/stdc++.h>
using namespace std;

int arr[] = {0, 3, 2, 4, 1, 8, 5, 6, 2};

void merge( int l, int mid, int r ){

    cout<<l<<" "<<mid<<" "<<r<<endl;
        int p = l;
        int q = mid+1;
        int len = r - l + 1;

        vector<int>v(len);
        int k = 0;

    for(int i=l; i<=r; i++ ){

        if( p > mid ){
            v[k] = arr[q];
            k++; q++;
        }
        else if( q > r ){
            v[k] = arr[p];
            k++, p++;
        }
        else if( arr[p] < arr[q] ){
            v[k] = arr[p];
            k++, p++;
        }
        else{
            v[k] = arr[q];
            k++, q++;
        }

    }

    k=0;

    for(int i=l; i<=r; i++){
        arr[i] = v[k];
        k++;
    }

}

void mergeSort( int l, int r ){

    if(l==r) return;

   int mid = (l+r)/2 ;

    mergeSort( l, mid );
    mergeSort( mid+1, r );
    merge( l, mid, r);

     for(int i=1; i<=8; i++){
        cout<<arr[i]<<" ";
     }


     cout<<endl;

}

/**int a[] = {0, 3, 2, 4, 1, 8, 5, 6, 2};

void merge ( int l, int mid, int r )
{
    int p = l; /// first half pointer
    int q = mid+1; /// second half pointer
    int len = r - l + 1;

    vector<int> v(len);
    int k = 0;

    for ( int i = l; i <= r; i++ ) {
        if ( p > mid ) {
            v[k] = a[q];
            k++, q++;
        }
        else if ( q > r ) {
            v[k] = a[p];
            k++, p++;
        }
        else if ( a[p] <= a[q] ) {
            v[k] = a[p];
            k++, p++;
        }
        else {
            v[k] = a[q];
            k++, q++;
        }
    }

    k = 0;
    for ( int i = l; i <= r; i++ ) {
        a[i] = v[k];
        k++;
    }
}

void mergeSort ( int l, int r )
{
    cout << l << " " << r << endl;
    if ( l == r ) return;

    int mid = ( l + r ) / 2;

    mergeSort( l, mid );
    mergeSort( mid+1, r );
    merge( l, mid, r );

    for ( int i = 1; i <= 8; i++ ) {
        cout << a[i] << " ";
    }
    cout << endl;
}
**/

int main(){

    mergeSort(1,8);





return 0;
}
