#include<bits/stdc++.h>
using namespace std;
int main(){

    int r1,r2,c1,c2;
    cout<<"Enter row and column number for 1st Matrix: ";
    cin>>r1>>c1;
    cout<<"Enter row and column number for 2nd Matrix: ";
    cin>>r2>>c2;

    int f[r1][c1], s[r2][c2], result[r1][c2];
    int sum=0;

    cout<<"\n First matrix value: "<<endl;
     for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
           cin>> f[i][j];
        }
     }

     cout<<"\n Second matrix value: "<<endl;
     for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
           cin>> s[i][j];
        }
     }

    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){

            for(int k=0; k<c1; k++){
              sum = sum + f[i][k] * s[k][j];
            }
            result[i][j] = sum;
            sum=0;
        }
    }

    cout<<"\n Multiflication of Matrix: "<<endl;
   for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
           cout<< result[i][j] <<" ";
        }
       cout<<endl;
   }

 return 0;
}

/**
Enter row and column number for 1st Matrix: 3 3
Enter row and column number for 2nd Matrix: 3 3

 First matrix value:
1 2 3
4 5 6
7 8 9

 Second matrix value:
4 5 6
7 8 9
1 2 3
**/
