#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N, P;
    cin >> N >> P;

    vector<int> heights(N);
    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }

    for (int i = 0; i < N - 1; ++i) {
        int power_needed = abs(heights[i + 1] - heights[i]);
        if (heights[i + 1] > heights[i]) {
            
            if (P >= power_needed) {
                P -= power_needed;
            } else {
                cout << "No" << endl;
                return 0;
            }
        } else {
            P += (heights[i] - heights[i + 1]);
        }
    }

    cout << "Yes" << endl;

    return 0;
}
