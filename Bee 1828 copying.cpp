
#include <iostream>

using namespace std;

int main() {

int n;
string s,r,t;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>s>>r;

    if(s==r) t="De novo!";
    else if((s=="tesoura" && r=="papel") || (s=="papel" && r=="pedra") || (s=="pedra"&&r=="lagarto") ||
             (s=="lagarto"&&r=="Spock") || (s=="Spock" && r=="tesoura") || (s=="tesoura" && r=="lagarto") ||
            (s=="lagarto" && r=="papel") || (s=="papel" && r=="Spock") || (s=="Spock" && r=="pedra") || (s=="pedra"&&r=="tesoura")){
                t="Bazinga!";
            }
     else{
        t="Raj trapaceou!";
     }

     cout<<"Caso #"<<i<<": "<<t<<endl;
}



return 0;
}
