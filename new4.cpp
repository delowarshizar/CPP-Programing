#include <iostream>

using namespace std;

int main() {
    int B;
    cin >> B;

    int picchiBandors = 0;

    if (B >= 5) {
        picchiBandors++;
        B -= 5;
    }
    if (B >= 10) {
        picchiBandors++;
        B -= 10;
    }

    if (B >= 15) {
        picchiBandors++;
        B -= 15;
    }

    cout << picchiBandors << endl;

    return 0;
}
