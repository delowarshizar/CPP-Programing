#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans = 0;
    int i = 0;
    if (n == 0)
        ans = 1;
    while(n!=0)
    {
        
        int bit = n & 1;
        int rev = bit ^ 1;
        if(rev == 1)
        {
            ans = rev * pow(2,i) + ans;
        }
        i++;
        n = n >> 1;

    }
    cout<<ans<<endl;
}