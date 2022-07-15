#include<iostream>
using namespace std;
int main(){
int a=97;
char c='f';
float d=30.332;
cout<<a<<"\t"<<c<<"\t"<<d<<endl;
cout<<"typecasting"<<endl;
char x=a;
int y=c;
cout<<x<<"\t"<<y<<endl;
cout<<"Inplace typecasting"<<endl;
cout<<(char)a<<"\t"<<(double)c<<"\t"<<(int)d<<endl;
return 0;
}
