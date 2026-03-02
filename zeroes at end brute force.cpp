#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums){
        // making temporary array
    vector<int>temp;
    int i;
    int n = nums.size();
    // copy non zero elements to temp array
    for(i=0;i<n;i++){
        if(nums[i]!=0){
            temp.push_back(nums[i]);
        }
    }
    
        int nz = temp.size();
        //overwrite non zero elements to nums array
        for(i=0;i<nz;i++){
            nums[i] = temp[i];
        }    
        // add remaining zeroes at end
        for(i=nz;i<n;i++){
            nums[i]=0;
        }
    }
};
// main function
int main() {
    vector<int> nums = {1,0,4,5,0,2};

    //Create an instance of Solution class
    Solution sol;

    sol.moveZeroes(nums);

    cout << "Array after moving zeroes: ";
    // Print the modified array
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}