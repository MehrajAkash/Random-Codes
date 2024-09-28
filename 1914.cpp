#include<iostream>
#include<string>
using namespace std;
int main(){

    int t; string s[4];
    cin>>t;
    while(t--){
        int m,n;
        cin>>s[0]>>s[1]>>s[2]>>s[3];
        cin>>m>>n;
        int sum=m+n;

        if(sum%2==0 && s[1]=="PAR")
            cout<<s[0]<<endl;

        else if(sum%2==0 && s[3]=="PAR")
            cout<<s[2]<<endl;

        else if(sum%2!=0 && s[1]=="IMPAR"){
            cout<<s[0]<<endl;
        }
        else{
            cout<<s[2]<<endl;
        }
    }



  /* for(string j : s){
     cout<<j<<endl;
   }
*/




return 0;
}
