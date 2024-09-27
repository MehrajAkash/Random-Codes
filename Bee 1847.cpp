#include<iostream>
using namespace std;
int main(){

for(int i=1;i<=8;i++){
        int a,b,c;
      cin>>a>>b>>c;

      if(a>b && c>=b) printf(":)\n");
      else if(a<b && c<=b) printf(":(\n");
      else if(b>a && c>b && (b-a > c-b)) printf(":(\n");
      else if(b>a && c>b && (b-a < c-b)) printf(":)\n");
      else if(a>b && b>c && (b-c < a-b)) printf(":)\n");
      else if(a>b && b>c && (a-b < b-c)) printf(":(\n");
      else if(a==b && c>b) printf(":)\n");
      else printf(":(\n");
}




//1848











































/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
       int a,b,c;
       cin>>a>>b>>c;
       if(b>a&&c<=b)
             printf(":(\n");
       else if(b>a&&c>b&&(c-b)<(b-a))
             printf(":(\n");
       else if(b>a&&c>b&&(c-b)>=(b-a))
              printf(":)\n");
      else if(b<a&&c<b&&(b-c)<(a-b))
              printf(":)\n");
      else if(b<a&&c<b&&(b-c)>=(a-b))
              printf(":(\n");
      else if((a==b)&&c>b)
              printf(":)\n");
       else if((a==b)&&c<b)
              printf(":(\n");
       else if(b<a&&c>=b)
             printf(":)\n");
       else
             printf(":(\n");
return 0;
}
*/


return 0;
}
