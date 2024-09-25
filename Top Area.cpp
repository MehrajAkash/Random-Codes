#include<iostream>
using namespace std;
int main(){
    double sum=0;
    double N[12][12];
    char O[2];
    int i,j;
    scanf("%s",&O);

    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
           scanf("%lf",&N[i][j]);


         int n=0,m=11;
    for(i=1;i<=5;i++){
        for(j=11;j>=m;j--){
            sum+=N[i][j];
        }
         m--;
    }

           n=0,m=7;
    for(i=6;i<=10;i++){
        for(j=m;j<=11;j++){
            sum+=N[i][j];
        }
         m++;
    }

if(O[0]=='S')printf("%.1lf\n",sum);

else printf("%.1lf\n",sum/30.0);

return 0;
}
