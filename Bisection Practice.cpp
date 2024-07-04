#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
double func(double x){
  double value = cos(x)-x*exp(x);
}

void bisection(double a,double b){
    double c,e;
  cout<<"Enter error value: ";
  cin>>e;

 if((func(a)*func(b))>0){
   cout<<"Invalid input taken";
   return;
 }

 do{
        c=(a+b)/2;
  if(func(c)*func(a)>0){
    a = c;
  }
  else{
    b = c;
  }

 }while(func(c)>e);
  cout<<setprecision(6)<<fixed;
  setw(10);
  cout<<"root is: "<<c<<endl<<endl;

}

int main(){
 int a,b;
 double f1,f2,f3;
 cout<<"Enter two value interval: ";
 cin>>a>>b;
 bisection(a,b);



  return 0;
}
