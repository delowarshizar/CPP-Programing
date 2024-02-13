#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter Student Mark: ";
    double mark;
    cin>>mark;
    if(mark>100)
    cout<<"Invalid Mark\n";
    else if(mark>=80)
    cout<<"A+\n";
    else if(mark>=75)
    cout<<"A";
    else if(mark>=70)
    cout<<"A-";
    else if(mark>=65)
    cout<<"B+";
    else if(mark>=60)
    cout<<"B";
    else if(mark>=55)
    cout<<"B-";
     else if(mark>=50)
    cout<<"C+";
     else if(mark>=45)
    cout<<"C";
     else if(mark>=40)
    cout<<"D";
    else
    cout<<"Fail!";
    return 0;


}