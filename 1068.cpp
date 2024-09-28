
#include<iostream>
using namespace std;
int main(){

 string s;
 cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==')') c++;

       else if(s[i]=='(') c--;
    }

    if(c==0){
        cout<<"correct"<<endl;
    }
    else{
        cout<<"incorrect"<<endl;
    }







return 0;
}
