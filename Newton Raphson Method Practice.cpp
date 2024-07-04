#include<iostream>
using namespace std;
#define error .01

double Func(double x){
      return x*x*x - x*x + 2;
}

double derivFunc(double x){
   return 3*x*x - 2*x;
}

double root(double x){
  double rt,h=10;

  while(abs(h)>error){
     h = (Func(x))/derivFunc(x);
    x = x-h;
  }
  return x;
}

int main(){
  int x0 = -10;
  double result = root(x0);
cout<<"Root is: "<<result<<endl;
 return 0;
}
