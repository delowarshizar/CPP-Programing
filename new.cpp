#include <bits/stdc++.h>
using namespace std;
int main()

{
    int m, n;
    bool count = false;
    cin >> m >> n;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        if (a[i] == n)
            count=true;
    }
    if (count)
        cout << "Senti Aunti Ramva will never be mine" << endl;
    else
        cout << "Senti Aunti Ramva is mine" << endl;

    return 0;
}
