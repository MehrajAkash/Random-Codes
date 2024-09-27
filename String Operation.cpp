#include <iostream>
using namespace std;

int main() {

    int value[] = {65,68,80,88,101,97};
    int length=sizeof(value)/sizeof(value[0]);

    for(int j=0;j<length;j++){
        cout<<"Alphabet of "<<value[j]<<" is: "<<char(value[j])<<endl;
    }

    string sg;
    cout<<"\n Enter your fullName: ";
    getline(cin, sg);
    for(int i=0; i<sg.length(); i++){
        cout<<"Ascii value of "<<sg[i]<<" is: "<<int(sg[i])<<endl;
    }
    cout<<endl;

    int number[] = {25,48,5,7,8};
    for(int n : number){
        cout<<n<<" ";
    }
    cout<<"\n";

    char ch[] = "SArk";
    for(char c : ch){
        cout<<c<<" ";
    }
  /*  for(int c : ch){
        cout<<char(c)<<" ";
    }
*/
    /*
 char c;
 cout << "Enter a character: ";
 cin >> c;
 cout << "ASCII Value of " << c << " is " << int(c);
 */
 return 0;
}


/*
#include<iostream>
using namespace std;
int main(){

string s; int sum=0;
while(getline(cin,s)){

    if(s!="caw caw"){
        if(s=="*--") sum+=4;
        if(s=="-*-") sum+=2;
        if(s=="--*") sum+=1;
    }
    else{
        cout<<sum<<endl;
        sum=0;
    }
}

return 0;
}
*/
/*
string firstName = "John ";
string lastName = "Doe";
string fullName = firstName.append(lastName);
cout << fullName



string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
*/


