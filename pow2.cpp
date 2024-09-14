#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool x = false;
    for(int i = 0; i<=30; i++)
    {
        int div = pow(2,i);
        if ( n == div)
           x = true;
    }
   if(x)
   cout<<"true"<<endl;
   else
   cout<<"false"<<endl;
}