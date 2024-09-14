#include<bits/stdc++.h>
using namespace std;
int factorial(unsigned int n)
{
    if (n<=1)
    {
    return 1;
    }

    return n * factorial(n-1);
}
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is = "<<(factorial(n));
    return 0;

}