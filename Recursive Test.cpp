#include<iostream>
using namespace std;
void test2(int b);
void test1(int a){
   cout<<a<<endl;

   if(a<0){
    test2(10);
   }
   else
   test1(--a);

}
void test2(int b){
   cout<<b<<endl;
  // test2(b);
}

int main(){
test1(5);


return 0;
}
