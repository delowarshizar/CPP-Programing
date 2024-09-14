#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while(1){
    cout<<"Enter a random number between 1 to 4: ";
    cin>>x;
    int randooNum = 1 + rand()%4;
    if (x == randooNum){
    cout<<"You are won the game!"<<endl;
    break;
    }
    else
    {
    cout<<"You Have Lost! Better Luck next time"<<endl;
    cout<<"Random Number was "<<randooNum<<endl;
    }
    }
    return 0;

}