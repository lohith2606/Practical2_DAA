#include <iostream>
#include <vector>

// Function that performs binary search on a sorted vector
int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        // Safe midpoint calculation to avoid integer overflow
        int mid = low + (high - low) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; // Return the index
        }
        
        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            low = mid + 1;
        } 
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Element was not present in the vector
    return -1;
}

int main() {
    // The input collection must be sorted
    std::vector<int> numbers = {2, 4, 6, 8, 10, 12, 14, 16};
    int target = 10;

    int result = binarySearch(numbers, target);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
