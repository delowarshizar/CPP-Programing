#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter Year: ";
    int year;
    cin>>year;
    if(year%4 ==  0 && year%100 != 0)
    cout<<"Leap Year!";
    else if (year%400 == 0)
    cout<<"Leap Year!";
    else
    cout<<"Not Leap Year!";
    return 0;
}