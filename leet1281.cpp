#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum = 0,product = 1, rem,div;
    cin>>n;
    while (n != 0)
    {
        rem = n%10;
        product *= rem;
        sum += rem;
        div = n/10;
        n = div;
    }
    int dif = product - sum;
    cout<<dif<<endl;

    return 0;
}