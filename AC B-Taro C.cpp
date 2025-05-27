#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,f;
    char g;
    cin>>n>>m;
  //  cout<<"before vector"<<endl;

    vector<char>arr[n];

    for(int i=0; i<n; i++){
        arr[i].push_back(0);
    }

    for(int i=0;i<m; i++){
        cin>>f>>g;
      //  cout<<"IN loop "<<endl;

        auto x = arr[f-1].back();

        if( g=='M' && (x != 'M') ){
         arr[f-1].push_back(g);
         cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }


  return 0;
}
