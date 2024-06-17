#include <iostream>
using namespace std;

int findLargest(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {1, 23, 10, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest element: " << findLargest(arr, n) << endl;
    return 0;
}
