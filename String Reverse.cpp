#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string s2[s.size()];
        for(int i=s.size()-1,j=0; i>=0; i--,j++ ){

            if(s[i]=='p'){
                s2[j] = 'q';
            }
            else if(s[i]=='q'){
                s2[j] = 'p';
            }
            else{
                s2[j] = s[i];
            }
        }

          for(int i=0; i<s.size(); i++)
              cout<<s2[i];
          cout<<endl;

    }


return 0;
}
