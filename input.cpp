#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    cout<<"Enter Your Name: ";
    getline(cin,name);
    cout<<"Hello, "<<name<<"!\n";
    return 0;
}