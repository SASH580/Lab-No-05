#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 3, 8, 1, 2};
    int n = 5;

    // Display Sorted Array
    cout << "After Sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
        // Find Maximum and Minimum
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    cout << endl;

    // Display Maximum and Minimum
    cout << "Maximum: " << max << endl; 
    cout << "Minimum: " << min << endl;

}