#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key, int index) {
    // Base case: if the index exceeds size, the key is not found
    if (index == size) {
        return -1;
    }
    // If the key is found at the current index, return the index
    if (arr[index] == key) {
        return index;
    }
    // Recursive case: search in the rest of the array
    return linearSearch(arr, size, key, index + 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 40;
    
    int result = linearSearch(arr, size, key, 0); // Start from index 0
    
    if (result != -1) {
        cout << "Element " << key << " found at index " << result << endl;
    } else {
        cout << "Element " << key << " not found" << endl;
    }
    
    return 0;
}
