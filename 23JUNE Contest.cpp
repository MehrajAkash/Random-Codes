#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 int t,a,b,c,d1,d2,d3,sum,r;
 cin>>t;
 for(int i=1;i<=t;i++){
    cin>>a>>b>>c;

    d1 = abs(a-b) + abs(a-c);
    d2 = abs(b-a) + abs(b-c);
    d3 = abs(c-a) + abs(c-b);

    r = std::min(d1,d2);
   sum = std::min(r,d3);

    cout<<sum<<endl;

 }

 return 0;
}
