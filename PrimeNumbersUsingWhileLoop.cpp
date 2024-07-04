#include<iostream>
using namespace std;
int main(){
 int r,countt,minn,maxx,i;
 cin>>minn>>maxx;
 int num = minn;

 while(num<=maxx){
        countt=0;

    while(i<=num/2){
        i=2;
        r=num%i;
        i++;
        if(r==0){
            countt++;
        }
    }

    if(countt==0){
        cout<<num<<endl;
    }
    num++;

 }







 return 0;
}
