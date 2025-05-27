#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  vector<int>arr(n);

  for(auto &x : arr)cin>>x;

  int ans=-2;
  for(int i=1;i<n;i++){

    if(arr[i]>arr[0]){
        ans = i;
        break;
    }
  }

  cout<<ans+1<<endl;

 return 0;
}
