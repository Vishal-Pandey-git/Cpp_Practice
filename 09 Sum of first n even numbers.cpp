#include<iostream>
using namespace std;
int main(){
int n,sum=0,i=0;
cout<<"Enter number of even numbers you would like to add: ";
cin>>n;
while(i<=n*2){
    if(i%2==0){
        sum+=i;
    }
    i++;
}
cout<<"Sum of first "<<n<<" even numbers is: "<<sum;
}
