#include<bits/stdc++.h>
using namespace std;

int main(){

  string d;

    cin>>d;

    char tmp = d[0];

    for( int i=0; i < d.size(); i++ ){
        int t = d[i] - '0'; // 6
        int revDigit = 9 - t; // 3

        if( revDigit < t ){
            d[i] = revDigit + '0';
        }

    }
    if( d[0]=='0' ){
        d[0] == tmp;
    }


    for( int j=0; j<d.size(); j++ ) cout<<d[j];
    cout<<endl;



return 0;
}
