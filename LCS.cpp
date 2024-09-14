#include <iostream>
#include <cstring> // For std::strlen and std::cin.getline()
#include <algorithm> // For std::max

// Function to find length of Longest Common Subsequence
int lcs(const char* X, const char* Y, int m, int n) {
    int** L = new int*[m+1]; // Create a 2D array to store lengths of LCS
    for (int i = 0; i <= m; ++i) {
        L[i] = new int[n+1];
    }

    // Build the L[m+1][n+1] table in bottom-up fashion
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                L[i][j] = 0; // If either sequence is empty, LCS length is 0
            }
            else if (X[i-1] == Y[j-1]) {
                L[i][j] = L[i-1][j-1] + 1; // If they are same, take diagonal value + 1
            }
            else {
                L[i][j] = std::max(L[i-1][j], L[i][j-1]); // Else take max of top or left cell
            }
        }
    }

    int lcs_length = L[m][n];

    // Clean up the allocated memory
    for (int i = 0; i <= m; ++i) {
        delete[] L[i];
    }
    delete[] L;

    // Return the length of LCS for X[0..m-1] and Y[0..n-1]
    return lcs_length;
}

int main() {
    std::string X, Y;

    std::cout << "Enter the first sequence: ";
    std::getline(std::cin, X);

    std::cout << "Enter the second sequence: ";
    std::getline(std::cin, Y);

    int m = X.length();
    int n = Y.length();

    std::cout << "Length of LCS is " << lcs(X.c