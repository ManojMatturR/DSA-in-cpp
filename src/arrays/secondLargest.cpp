#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int arr[] = {1, 23, 10, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Second largest element: " << findSecondLargest(arr, n) << endl;
    return 0;
}
