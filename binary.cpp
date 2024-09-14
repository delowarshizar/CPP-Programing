#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    int bit, i = 0;

    while (n != 0) {
        bit = n % 10;
        ans = ans + (bit * pow(2, i)); 
        n = n / 10; 
    }

    cout << ans << endl;
}
