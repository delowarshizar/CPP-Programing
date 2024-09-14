#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int tk100 = 100;
    int tk50 = 50;
    int tk20 = 20;
    int tk1 = 1;
    int temp;
    switch (1)
    {
    case 1: temp = num/100;
            cout<<temp<<" numbers of 100 Taka"<<endl;
            num = num % 100;
    case 2: temp = num/50;
            cout<<temp<<" numbers of 50 Taka"<<endl;
            num = num % 50;
    case 3: temp = num/20;
            cout<<temp<<" numbers of 20 Taka"<<endl;
            num = num %20;
    case 4: temp = num /1;
            cout<<temp<<" numbers of 1 Taka";
            break;
    }
}