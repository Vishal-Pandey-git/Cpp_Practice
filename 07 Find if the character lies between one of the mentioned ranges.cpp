#include<iostream>
using namespace std;
int main(){
char a;
cout<<"Enter a character upper or lower case/integer 0 to 9: ";
cin>>a;
if(a>='a'&&a<='z'){
    cout<<a<<" lies in range a and z.\n";
}
else if(a>='A'&&a<='Z'){
    cout<<a<<" lies in range A and Z.\n";
}
else if(a>='0' && a<='9'){
    cout<<a<<" lies in range 0 and 9.\n";
}
else{
    cout<<a<<" is a special character";
}
return 0;
}
