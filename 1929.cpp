#include<iostream>
using namespace std;


    int triangle(int a,int b,int c){
        if(a+b>c && b+c>a && c+a>b){
        return 1;
        }
        else{
           return 0;
         }
    }

int main() {

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int possible = triangle(a,b,c) || triangle(b,c,d) || triangle(a,c,d) || triangle(a,b,d);

    if(possible){
    cout<<"S"<<endl;
    }else{
    cout<<"N"<<endl;
    }

return 0;
}
