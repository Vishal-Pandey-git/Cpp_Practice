#include<iostream>
using namespace std;
int main(){
int n,sum=0,i=0;
cout<<"Enter a positive integer for range: ";
cin>>n;
while(i<=n){
    if(i%2==0){
        sum+=i;
    }
    i++;
}
cout<<"Sum of all even numbers in range 0 to "<<n<<" is: "<<sum;
}
