
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    vector<int>arr(n);

    for(int i=0; i<n; i++)cin>>arr[i];

    sort(arr.begin(), arr.end());
    int ans=0;

    for(int i=0; i<n; i++){

            if(ans<arr[i])ans++;

    }


    cout<<ans<<endl;



    return 0;
}
