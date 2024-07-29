#include<iostream>
#include<math.h>
using namespace std;
#define f(x) x*x+2*x+1

double func(double a,double b){
    double f1,f2,f3,c,e;
    cout<<"Enter epsilon value: ";
    cin>>e;

    do{
        c = (a+b)/2;
        if(f(c)*f(a) > 0){
            a = c;
        }
        else{
            b = c;
        }
        f3 = f(c);

    }while(f3>e);
    cout<<" root: "<<c<<endl;
}


int main(){
 int a,b;
 cout<<"Enter two intervals value: ";
 cin>>a>>b;


 func(a,b);

 return 0;
}
