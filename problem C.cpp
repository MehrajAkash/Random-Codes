#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
            cout<<endl;

        int ans =0;
        int dim=8;
        char result = 'B';

        vector<char>input(8);

        while(dim--){

                int count=0;

            for(int i=0;i<8; i++){
                cin>>input[i];
              if(input[i]=='R'){
                  count++;
                 // cout<<count<<endl;
              }
            }
            ans = max(count, ans);


        }

        if(ans == 8){
                cout<<"R"<<endl;
        }
        else{
            cout<<result<<endl;
        }


    }

    return 0;
}
