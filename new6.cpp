#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, k,sum = 0;
    cin >> n >> k;
    
    int m[n],p[n];
    for (int i = 0; i < n; ++i) {
        cin >> m[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    for (int i = 0; i < n; ++i) {
        sum = sum + p[i];
    }
    
    int captured_followers = 0;
    for (int i = 0; i < n; ++i) {
        if (k >= m[i]) { // If soldiers are sufficient for this cave
            captured_followers = captured_followers + p[i];
        
        }
    }
    
    if (sum == captured_followers) {
        cout << "My King, I am successful in capturing the big fish. Immortality is few steps away." << endl;
    } else {
        cout << "My King, I have captured " << captured_followers << " followers till now and I need more soldiers asap." << endl;
    }
    
    return 0;
}
