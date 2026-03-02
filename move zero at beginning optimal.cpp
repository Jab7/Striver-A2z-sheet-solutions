#include <bits/stdc++.h>
using namespace std;

void moveZerosToBeginning(vector<int>& arr) {
    int n = arr.size();
    int j = n - 1;

    // Move non-zero elements to end
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j--;
        }
    }

    // Fill remaining positions with 0
    for (int i = 0; i <= j; i++) {
        arr[i] = 0;
    }
}

int main() {
    vector<int> arr = {1, 0, 2, 0, 4, 5, 0};
    moveZerosToBeginning(arr);

    for (auto it : arr)
        cout << it << " ";
}