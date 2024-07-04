#include<iostream>
using namespace std;
int main(){
 int num=100,r,countt;
//cout<<5%2<<endl;
 for(int i=2;i<=num;i++){
   countt=0;
   for(int k=2; k<=i/2; k++){

        r=i%k;
        if(r==0){
          countt++;
        }
    }
    if(countt==0){
            cout<<i<<endl;

    }

}







  return 0;
}
