#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min] < a[j])
                swap(a[min], a[j]);
        }
    }
    cout << "Shortlisted Candidates :" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " " << endl;
    }
    return 0;
}