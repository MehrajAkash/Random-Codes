#include <bits/stdc++.h>
using namespace std;

vector<int> counting( vector<int>& inputArray ){

    int N = inputArray.size();
    int MxV=0;
    for(int i=0; i<N; i++ )
        MxV = max( MxV, inputArray[i] );

    vector<int> countArray(MxV+1, 0);

    for(int i=0; i<N; i++ )
        countArray[ inputArray[i] ]++;

     for(int i=1; i<countArray.size(); i++ )
        countArray[i] += countArray[i-1];

     vector<int> outputArray(N);

      for(int i=N-1; i>=0; i-- ){
         outputArray[ --countArray[inputArray[i]] ] = inputArray[i];
      }

    return outputArray;
}

int main() {

    vector<int> inputArray ={ 4, 3, 12, 1, 5, 5, 3, 9 };

    vector<int> printArray = counting( inputArray );

    for(int i=0; i<printArray.size(); i++ ){
        cout<< printArray[i] <<" ";
    }

    return 0;
}




