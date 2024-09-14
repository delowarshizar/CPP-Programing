#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
   {
        cin>>a[i];
   }
   

 for(int i = 0; i<n; i++)
   {
    if(a[i]>0)
       if(a[i]%2 == 0)
       {
        cout<<"EVEN POSITIVE"<<endl;
       }
       else
       {
        cout<<"ODD POSITIVE"<<endl;
       }
  else if(a[i]<0)
    {
     if(a[i]%2 == 0)
       {
        cout<<"EVEN NEGATIVE"<<endl;
       }
       else
       {
        cout<<"ODD NEGATIVE"<<endl;
       }
    }
    else
    cout<<"NULL"<<endl;

   }
       return 0;
}