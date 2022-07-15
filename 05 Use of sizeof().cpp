#include<iostream>
using namespace std;
int main(){
int a=2;
float b=9.0;
char c='A';
double d=9.99999993;
long e=9999999999999999;
bool x=true;
string f = "HJUGBUVCdfgehg287523 ey wyr87qyr8yr8qy9(^*^&%$^&%$%^$&^YCFGTfgtctr";
cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl<<x<<endl;
cout<<sizeof(a)<<endl<<sizeof(b)<<endl<<sizeof(c)<<endl<<sizeof(d)<<endl<<sizeof(e)<<endl<<sizeof(f)<<endl<<sizeof(x)<<endl;
//sizeof(int) or sizeof(char) or etc... also works to know size of the datatype keyword.
return 0;
}
