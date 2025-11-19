#include <iostream>

// Binary search function
int binarySearch(int arr[], int size, int target) {
    int lb = 0;
    int ub = size - 1;

    while (lb <= ub) {
        int mid = lb + (ub - lb) / 2;

        // Check if target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target is greater, ignore left half
        if (arr[mid] < target)
            lb = mid + 1;

        // If target is smaller, ignore right half
        else
            ub = mid - 1;
    }

    // Target not found in the array
    return -1;
}

int main() {
    // Define the sorted array
        int arr[]={2,4,6,8,10,12,14,16};

    // Define the target element to search
    int target = 6;

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Perform binary search
    int index = binarySearch(arr, size, target);

    if (index != -1)
        std::cout << "Element found at index " << index << std::endl;
    else
        std::cout << "Element not found in the array" << std::endl;

    return 0;
}
