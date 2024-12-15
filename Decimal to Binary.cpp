#include<bits/stdc++.h>
using namespace std;
int main(){

    int n=12;
    int bn,r;
    int i=0;
    int tmp = n;

    vector<int>s;

    while( n != 0 ){

        r = n%2;
        n = n/2;
        s.push_back(r);

    }

    reverse( s.begin(), s.end() );
    for(int j=0;j<s.size();j++){
        cout<<s[j]<<endl;

    }








return 0;
}
