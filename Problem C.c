#include<stdio.h>
int main(){

int t,count;

scanf("%d",&t);
 float hr,tr,shr,str;

for(int i=1;i<=t;i++){
  shr=0;str=0;
  count=0;
 scanf("%d%d",&hr,&tr);
    //str=tr; shr=hr;
   do{

      shr= shr+hr;
      hr = hr/2;

      str = str+tr;


     count++;
    } while(str<=shr);

     printf("Case #%d: %d\n",i,count);


}








return 0;
}
