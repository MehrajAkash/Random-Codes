#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int count=0;
        std::vector<char>arr(8);
        int dim=8;
        char result = 'R';
        char input;
        
        while(dim--){
            for(int i=0;i<8; i++){
                cin>>input;
              if(input=='B'){
                  count++;
              }
            }
        
        }
        
        if(count == 8)cout<<"B"<<endl;
        else{
            cout<<result<<endl;
        }
        
        
        
        
    }

    return 0;
}