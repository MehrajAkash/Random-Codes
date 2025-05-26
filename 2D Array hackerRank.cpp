#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[6][6];

    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){

            cin>>arr[i][j];

        }
    }

    long long sum=0;
    int rini=0, ren=2;
    int cini=0, cen=2;
    int count=0;

    //long long maxi=0;
    long long result=0;
   // int sub=0;
    for(int k=1; k<=16; k++){

        //for(int i=rini; i<ren, i<6; i++){
        for(int j=cini; j<=cen && j<6; j++){

            for(int i=rini; i<=ren && i<6; i++){

                 count++;
                 if(count==2 || count==8){
                    continue;
                 }
                 sum += arr[i][j];
             //    cout<<arr[i][j]<<" ";

                 //cout<<arr[i][j]<<" ";

            }
            //cout<<endl;

        }
        count=0;
            cini++;
            cen++;

        if(cini==4 && rini<3){
            cini=0;
            cen=2;
            rini++;
            ren++;

        }

         result = max(result, sum);

     //   cout<<sum<<" ";
        sum=0;

        //sub++;
        //cout<<result<<" "

      /*  if(sub==6){
            sub=0;
           // cout<<endl;
        }
        */
    }

    cout<<result<<endl;


  return 0;
}
