#include <iostream>

// Function to perform linear search
// Returns the index if found, otherwise returns -1
int linearSearch(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Target found, return current index
        }
    }
    return -1; // Target not found after checking entire array
}

int main() {
    int numbers[] = {12, 45, 7, 23, 9, 56, 31};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 23;

    int result = linearSearch(numbers, size, target);

    if (result != -1) {
        std::cout << "Element " << target << " found at index: " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    return 0;
}
