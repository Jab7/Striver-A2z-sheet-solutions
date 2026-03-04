//Brute force: Store elements of 1 array in set and elements of 2nd array in that set, store another array which has elements
// of our set, that would be union. Return Union
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2){
        set<int>s;
        vector<int> Union;
        for(int num: nums1){
            s.insert(num);
        }
        for(int num: nums2){
            s.insert(num);
        }
        for(int num:s){
            Union.push_back(num);
        }
return Union;
    }
};

//Optimal approach : Use 2 pointer approach, compare two pointers which point to 2 arrays and put that element which is less
// i points to 1st array and j points to 2nd array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> Union; // Vector to store the union elements
        int i = 0, j = 0;
        int n = nums1.size();
        int m = nums2.size();

        while (i < n && j < m) {
            // Case 1 and 2
            if (nums1[i] <= nums2[j]){ 
            
            if (Union.size() == 0 || Union.back() != nums1[i])
                Union.push_back(nums1[i]);
                i++;
            } 
            
            //case 3
            else{
                if (Union.size() == 0 || Union.back() != nums2[j])
                Union.push_back(nums2[j]);
                j++;
            }
        }

        // If any element left in arr1
        while (i < n){ 
            if (Union.back() != nums1[i])
                Union.push_back(nums1[i]);
            i++;
        }
        // If any elements left in arr2
        while (j < m){ 
            if (Union.back() != nums2[j])
                Union.push_back(nums2[j]);
            j++;
        }

        return Union;
    }
};