#include<bits/stdc++.h>
using namespace std;

int main(){

    long long a = 2*100000000000000;

    cout<<"a: "<<a<<endl;

    cout<<"size int : "<<sizeof(int)<<endl; /// 4
    cout<<"size long long int: "<<sizeof(long long int)<<endl;/// 8
    cout<<"size long long : "<<sizeof(long long)<<endl;/// 8
    cout<<"size float : "<<sizeof(float)<<endl;
    cout<<"size double : "<<sizeof(double)<<endl; /// 8
    cout<<"size long double: "<<sizeof(long double)<<endl;/// 16

    long double l = 5;
    cout<<"ld: "<<l<<endl;

    long double ld = 11*10*9*8*7*6*5*4*3*2*1;
    cout<<"long double : "<<ld<<endl;

    cout<< 2.3456e+08 <<endl;

    cout<< 11/2 <<endl;
    cout<< double(11/2) <<endl;

return 0;
}
