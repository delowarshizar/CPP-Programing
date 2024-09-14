#include <iostream>
#include <algorithm> // For std::sort
#include <functional> // For std::greater

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Sorting in ascending order
    std::sort(arr, arr + size);
    std::cout << "Array sorted in ascending order: ";
    printArray(arr, size);

    // Sorting in descending order
    std::sort(arr, arr + size, std::greater<int>());
    std::cout << "Array sorted in descending order: ";
    printArray(arr, size);

    return 0;
}