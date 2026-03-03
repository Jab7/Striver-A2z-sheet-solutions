#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to remove duplicates from the array, storing unique elements in the set
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int i;
        for(i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        //now iterating through set and copying back to arrays till set is exhausted
int k = s.size();
int index = 0;
for(int val : s){
nums[index]= val;
index++;
}
return k;
    }
};
void printArray(vector<int> &nums, int n) {
    for(int i=0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int>nums = {1,1,2,2,2,3,3,3,3,3,3};
Solution sols;
int k = sols.removeDuplicates(nums);
printArray(nums,k);
}


