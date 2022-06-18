#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter Value of b: ";
    cin >> b;
    cout << "Sum of " << a << " and " << b << " is " << sum(a, b) << endl;
    return 0;
}
