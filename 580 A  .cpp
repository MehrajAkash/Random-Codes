#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;
    vector<int>arr(n);

    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

  //  sort(arr.begin(), arr.end(), greater<int>());

    long long sum1=0, sum2=0,term=1;
   int i=0,j=n-1;
   while(i<=j){

    if(term%2 == 1){
         if(arr[i]>arr[j]){
            sum1+=arr[i];
            i++;
        }
        else{
            sum1+=arr[j];
            j--;
        }
    }

    else{

       if(arr[i]>arr[j]){
        sum2+=arr[i];
        i++;
       }
       else{
        sum2+=arr[j];
        j--;
       }

    }

     term++;

   }

    cout<<sum1<<" "<<sum2<<endl;


 return 0;
}
