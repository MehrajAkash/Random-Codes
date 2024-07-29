#include<iostream>
using namespace std;
int main(){
    int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
 int r,d;
 for(int num=0;num<=30;num++){
    r=num%10;
    d=num/10;
   // cout<<d<<" ";cout<<r<<" "<<endl;
if(d==1){ one++;}
if(d==2){ two++;}if(d==3){ three++;}if(d==4){ four++;}if(d==5){ five++;}if(d==6){ six++;}if(d==7){ seven++;}if(d==8){ eight++;}if(d==9){ nine++;}
    switch(r){
 case 0:
    zero++; continue;
 case 1:
    one++; continue;
 case 2:
    two++; continue;
 case 3:
    three++; continue;
 case 4:
    four++; continue;
 case 5:
    five++; continue;
 case 6:
    six++; continue;
 case 7:
    seven++; continue;
 case 8:
    eight++; continue;
 case 9:
    nine++; continue;
    }
 }
cout<<"zero "<<zero<<endl;
 cout<<"one "<<one <<endl;
cout<<"two "<<two <<endl;
cout<<"three "<<three <<endl;
cout<<"four "<<four <<endl;
cout<<"five "<<five <<endl;
cout<<"six "<<six <<endl;
cout<<"seven "<<seven <<endl;
cout<<"eight "<<eight <<endl;
cout<<"nine "<<nine <<endl;

   return 0;
}
