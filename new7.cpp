#include <iostream>

using namespace std;

int main() {
    int T, W;
    cin >> T >> W;

    if (T > 2000) {
        cout << "Bandor, these bananas are tasty enough." << endl;
    } else if (T > 0 && W > 100) {
        cout << "Bandor, these bananas are tasty enough." << endl;
    } else {
        cout << "No Bandor, bananas are not tasty enough." << endl;
    }

    return 0;
}
