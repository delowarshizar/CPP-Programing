#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the array row size and column size: ";
    cin>>a>>b;
    cout<<"Enter Element in Array: ";
    int array[a][b];
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
        {
          cin>>array[i][j];
        }

    }
    cout<<"The list is: "<<endl;
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
        {
          cout<<array[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;

}