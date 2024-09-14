#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the length of the Longest Increasing Subsequence
int lis(const vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return 0;

    // Create a dp array to store the length of the longest increasing subsequence ending at each index
    vector<int> dp(n, 1);

    // Fill the dp array in a bottom-up manner
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    // The length of the longest increasing subsequence is the maximum value in dp array
    return *max_element(dp.begin(), dp.end());
}

int main() {
    int n;
    cout << "Enter the number of elements in the sequence: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the sequence: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Length of Longest Increasing Subsequence is " << lis(arr) << endl;

    return 0;
}
