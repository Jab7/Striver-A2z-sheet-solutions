#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to remove duplicates from the array, using 2 pointer approach. i points to unique element
    // j iterates through array
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j;
        for(j=0;j<nums.size();j++){
            if(nums[i]!= nums[j]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};
    
    // Create an instance of the Solution class
    Solution solution;
    
    // Call removeDuplicates to remove duplicates from nums
    int k = solution.removeDuplicates(nums);
    
    cout << "The vector after removing duplicate elements is " << endl;
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}



   

