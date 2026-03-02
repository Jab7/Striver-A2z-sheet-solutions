#include <bits/stdc++.h>
using namespace std;

void moveZerosToBeginning(vector<int>& arr) {
    vector<int> temp;
    int n = arr.size();

    // First push all zeros
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            temp.push_back(arr[i]);
    }

    // Then push non-zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0)
            temp.push_back(arr[i]);
    }

    // Copy back
    arr = temp;
}

int main() {
    vector<int> arr = {1, 0, 2, 0, 4, 5, 0};
    moveZerosToBeginning(arr);

    for (auto it : arr)
        cout << it << " ";
}