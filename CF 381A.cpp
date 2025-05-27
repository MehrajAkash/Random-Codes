#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;cin>>n;
    vector<int>arr(n);
    //cout<<arr[0]<<endl;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort( arr.begin(), arr.end() );

    int sum1=0,sum2=0;
    int i=arr.size();


   // cout<<arr[i-1]<<endl;
    while(!arr.empty()){
        sum1 = sum1+arr[--i];
       // cout<<"sum1: "<<sum1<<endl;
        arr.pop_back();

        sum2 = sum2+arr[--i];
       // cout<<"sum2: "<<sum2<<endl;
        arr.pop_back();
    }


    cout<<sum1<<" "<<sum2<<endl;

 return 0;
}
