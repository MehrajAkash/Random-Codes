#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {

        vector<int> sum( arr.size()+1 );

        for( int i=1; i<=arr.size(); i++ ){
            sum[i] = sum[i-1] + arr[i-1];

        }

        int len, ans=0;
        for(int l=1; l<sum.size(); l++ ){
            for(int r=l; r<sum.size(); r++ ){
                len = r-l +1;
                if( len%2 ){
                    ans += ( sum[r] - sum[l-1] );
                   /// cout<<ans<<endl;
                }
            }
        }
      return ans;
    }

};
int main(){
    vector<int>arr = {10,11,12};

    Solution st;
    cout<<st.sumOddLengthSubarrays(arr)<<endl;

return 0;
}
