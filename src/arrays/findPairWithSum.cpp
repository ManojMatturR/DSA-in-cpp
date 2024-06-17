// Write a program to find all pairs in an array that sum up to a given value.

#include <iostream>
#include <unordered_set>
using namespace std;

void findPairsWithSum(int arr[], int n, int sum) {
    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        int temp = sum - arr[i];
        if (s.find(temp) != s.end()) {
            cout << "Pair with given sum " << sum << " is (" << arr[i] << ", " << temp << ")" << endl;
        }
        s.insert(arr[i]);
    }
}

int main() {
    int arr[] = {1, 4, 45, 6, 10, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 16;
    findPairsWithSum(arr, n, sum);
    return 0;
}
