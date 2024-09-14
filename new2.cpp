#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int id[n], mark[n];
    for (int i = 0; i < n; i++)
    {
        cin >> id[i] >> mark[i];
    }
  int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (mark[j] > mark[j + 1]) {
				swap(mark[j], mark[j + 1]);
	
			}
	}
    }

        for (int i = 0; i < 3; i++)
        {

            sum = sum + mark[i];
        }
        if (sum < 150)
            cout << "Counseling Support Required" << endl;
        else
        {
            cout << "Counseling Support Not Required" << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << mark[i] << " ";
            }
            cout << endl;
        }

        return 0;
    }
