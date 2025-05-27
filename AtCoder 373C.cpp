#include<bits/stdc++.h>
using namespace std;

int main(){



    int n;
    cin>>n;
    vector<int>a(n),b(n);

    for(auto &x : a)cin>>x;

    for(auto &x : b)cin>>x;

    int maxa = *max_element(a.begin(),a.end());
    int maxb = *max_element(b.begin(),b.end());

    cout<<maxa+maxb<<endl;

   // auto p = minmax_element(a.begin(), a.end());
    //cout<<p<<endl;
   // cout<<*p.first<<endl;
   // cout<<*p.second<<endl;



  return 0;
}
