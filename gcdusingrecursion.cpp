#include<bits/stdc++.h>
using namespace std;

int gcd(int num1, int num2)
{
    if(num2 != 0)
    {
     return gcd(num2,num1 % num2);
    }
   return num1;

}
int main()
{
    int num1,num2;
    cout<<"Enter two number: ";
    cin>>num1>>num2;
    cout<<"GCD of "<<num1<<" and "<<num2<<" = "<<gcd(num1,num2)<<endl;
    return 0;

}