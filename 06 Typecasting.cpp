#include<iostream>
using namespace std;
int main(){
int a=97;
char c='f';
float d=30.332;
cout<<"default values"<<endl;
cout<<a<<"\t"<<c<<"\t"<<d<<endl;
cout<<"typecasting"<<endl;
char x=a;
int y=c;
int k=d;
cout<<x<<"\t"<<y<<"\t"<<k<<endl;
cout<<"Inplace typecasting"<<endl;
cout<<(char)a<<"\t"<<(double)c<<"\t"<<(int)d<<endl;
return 0;
}
