#include<bits/stdc++.h>
using namespace std;
int main(){

    int num=1110, n,r,dn=0,base=1;

    while( num !=0 ){
        r = num % 10;
        dn = dn + r*base;
        base = base*2;
        num = num/10;
    }

    cout<<dn<<endl;




return 0;
}
