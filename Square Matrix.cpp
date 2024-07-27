#include<iostream>
using namespace std;
int main(){
 int n,i,j,l;
 cin>>n;
 int arr[n][n];
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        arr[i][j]=1;
    }
}


for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cout<<" "<<arr[i][j];
    }
    cout<<endl;
}





 return 0;
}
