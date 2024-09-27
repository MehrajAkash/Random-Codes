#include<iostream>
#include<string>
using namespace std;

/*void swapp(string *n,string *m){
    string *temp = *n;
    *n = *m;
    *m = *temp;
} */

int main(){
string arr[]={"Mehraj","Akash","Hossain"};

 /* for(int i=0;i<5;i++){
        string s; int j=i+1;

    if(arr[i]>arr[j]){
        //swapp(&arr[i],&arr[j]);
         string temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
    }
 } */

 for(int a=0;a<5;a++)
    cout<<arr[a]<<" ";



if('a'<'b'){
    cout<<" b is big "<<endl;
}
if("bdef"<"cdef") cout<<"c is bigger than b"<<endl;
if("c"<"f") cout<<"f is bigger than c"<<endl;


return 0;
}
