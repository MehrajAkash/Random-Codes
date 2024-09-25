#include<iostream>
#include<string.h>
using namespace std;

int main(){
//int tesoura=1,papel=2,pedra=3,lagarto=4,Spock=5;

string word[5]={"tesoura","papel","pedra","lagarto","Spock"};

int n;
cin>>n;

   int fvalue,lvalue;
for(int j=0;j<n;j++){

         string ch1,ch2;
         cin>>ch1>>ch2;


    for(int i=0;i<5;i++){
        if(ch1==word[i]){
           fvalue=i;
        }

        if(ch2==word[i]){
                lvalue=i;
         }
     }

        if(fvalue<lvalue) cout<<"Caso #"<<j+1<<": Bazinga!"<<endl;

      if(fvalue>lvalue) cout<<"Caso #"<<j+1<<": Raj trapaceou!"<<endl;

    if(fvalue==lvalue){
            cout<<"Caso #"<<j+1<<": De novo!"<<endl;
         }
}




  return 0;
}
