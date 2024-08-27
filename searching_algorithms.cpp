#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

// Function to perform binary search (recursive)
int binarySearch(int arr[], int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target is smaller, search in left subarray
        if (arr[mid] > target)
            return binarySearch(arr, left, mid - 1, target);

        // If target is larger, search in right subarray
        return binarySearch(arr, mid + 1, right, target);
    }

    // Target is not present in array
    return -1;
}

int main() {
    int n, target, result;
    
    cout << "Enter the number of elements in the array: "; cin >> n;
    
    int arr[20];
    cout << "Enter the elements of the array (sorted in ascending order): " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << " = "; cin >> arr[i];
    }

    cout << "Enter the target value to search: "; cin >> target;

    result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    getch();
    return 0;
}
