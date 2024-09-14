#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float ans = 0;
    int bit,i;
    while(n!=0)
    {
        bit = n % 10;
        if(bit == 1 )
        {
         ans = ans + ( bit * pow (2,i ) ) ;
        }
        i++;
        n = n / 10;
    }
    cout<<ans<<endl;
}