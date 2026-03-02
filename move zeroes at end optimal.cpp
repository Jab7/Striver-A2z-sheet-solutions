#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums){
    int j=0;
    int i;
    // iterating i throughout array, j is 0 initially. j points to first 0 element, if i points to non zero element swap elements
    // at i and j index and increment j, i gets incremented due to iteration.
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
}
};
int main(){
    vector<int>nums = {0,1,4,5,2,0};
    Solution sol;
    sol.moveZeroes(nums);
    cout<<" Updated array ";
     int i;
     for(i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
     }
     return 0;
}