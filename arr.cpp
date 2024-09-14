#include<bits/stdc++.h>
using namespace std;
void Binary(int a[],int n,int key1,int key2,int key3)
{
    int count = 0;
    int sum = 0;
    int multi = 1;
    
    for(int i = 0; i< n; i++)
    {
     if(a[i]==key1||a[i]==key2||a[i]==key3)
     {
        count++;
        sum = sum + a[i];
        multi = multi * a[i];
     }

    }
    if(count == 3)
     cout<<multi<<endl;
    else
     cout<<sum<<endl;

}
int main()
{
    int n,key1,key2,key3;
    cin>>n>>key1>>key2>>key3;
    int a[n];
    for(int i = 0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
   Binary(a,n,key1,key2,key3);
return 0;
}