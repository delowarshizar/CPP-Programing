#include <bits/stdc++.h>
using namespace std;


void greedy(int a[], int n, int amount)
{

    
    int remain_amount = amount;
    int ncoin, count = 0;
    for (int i = 0; i < n; i++)
    {
        ncoin = remain_amount / a[i];
        if (ncoin > 0)
            count = count + ncoin;
        remain_amount = remain_amount - (ncoin * a[i]);
        if(remain_amount == 0)
        break;
    }
    
        cout <<count<<endl;
}

int main()
{
    int n, amount;
    cin >> n >> amount;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a,a+n,greater<int>());
   
    greedy(a, n, amount);
    return 0;
}