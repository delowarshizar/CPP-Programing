#include<bits/stdc++.h>
using namespace std;
int main()
{
    float num1,num2;
    cout<<"Enter two Number: ";
    cin>>num1>>num2;
    
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    float sum = num1 + num2;
    cout<<setw(25)<<"Sum is:"<<sum<<endl;
  
     float sub = num1 - num2;
    cout<<setw(25)<<"Substraction is:"<<sub<<endl;
     float mul = num1 * num2;
    cout<<setw(25)<<"Multipication is:"<<mul<<endl;
     float div = num1 + num2;
    cout<<setw(25)<<"division is:"<<div<<endl;
    return 0;
}