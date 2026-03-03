// brute force: do linear search and find which number is missing in array
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the missing number 
    int missingNumber(vector<int>& nums) {
       // Calculate N from the size of nums
        int N = nums.size(); 
        
        // Outer loop that runs from 0 to N
        for (int i = 0; i <= N; i++) {
            /* Flag variable to check 
            if an element exists*/
            int flag = 0;
            
            // Search for the element using linear search
            for (int j = 0; j < N; j++) {
                if (nums[j] == i) {
                    // i is present in the array
                    flag = 1;
                    break;
                }
            }
            
            // Check if the element is missing (flag == 0)
            if (flag == 0) return i;
        }
        
        /*  The following line will never
        execute,it is just to avoid warnings*/
        return -1;
    }
};

int main() {
    vector<int> nums = {0,1, 2, 4};
    
    // Create an instance of the Solution class
    Solution solution;
    
    /* Call the missingNumber method 
    to find the missing number*/
    int ans = solution.missingNumber(nums);
    
    
    cout << "The missing number is: " << ans << endl;
    
    return 0;
}

//better: we use hashmap and calc those elements which have freq 0 in array and those are missing element
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the missing number
    int missingNumber(vector<int>& nums) {
        int N = nums.size(); 
        
        // Array to store frequencies, initialized to 0
        int freq[N+1] = {0};
        
        // Storing the frequencies in the array
        for (int num : nums) {
            freq[num]++;
        }
        
        // Checking the frequencies for numbers 0 to N
        for (int i = 0; i <= N; i++) {
            if (freq[i] == 0) {
                return i;
            }
        }
        
        /* This line will never execute, 
        it is just to avoid warnings*/
        return -1;
    }
};

int main() {
    vector<int> nums = {0,1, 2, 4};
    
    // Create an instance of the Solution class
    Solution solution;
    
    /* Call the missingNumber method 
    to find the missing number*/
    int ans = solution.missingNumber(nums);
    
    cout << "The missing number is: " << ans << endl;
    
    return 0;
}

// Optimal1: now we do sum of first n elements and do their diff with sum of elements in array
// diff would give missing number

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the missing number
    int missingNumber(vector<int>& nums) {
        // Calculate N from the size of nums
        int N = nums.size();
        
        // Summation of first N natural numbers
        int sum1 = (N * (N + 1)) / 2;
        
        // Summation of all elements in nums
        int sum2 = 0;
        for (int num : nums) {
            sum2 += num;
        }
        
        // Calculate the missing number
        int missingNum = sum1 - sum2;
        
        // Return the missing number
        return missingNum;
    }
};

int main() {
    // Example vector with missing number
    vector<int> nums = {0,1, 2, 4};
    
    // Create an instance of the Solution class
    Solution solution;
    
    /* Call the missingNumber method
    to find the missing number*/
    int ans = solution.missingNumber(nums);
    
    cout << "The missing number is: " << ans << endl;
    
    return 0;
}
   
// optimal 2: xor approach
// do xor of all elements with those elements in array , ans will be missing no. faster than previous approach
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the missing number
    int missingNumber(vector<int>& nums) {
        int xor1 = 0, xor2 = 0;

        // Calculate XOR of all array elements
        for (int i = 0; i < nums.size(); i++) {
            xor1 = xor1 ^ (i + 1); //XOR up to [1...N]
            xor2 = xor2 ^ nums[i]; // XOR of array elements
        }

        // XOR of xor1 and xor2 gives missing number
        return (xor1 ^ xor2);
    }
};

int main() {
    vector<int> nums = {1, 2, 4, 0};

    // Create an instance of the Solution class
    Solution solution;

    /* Call the missingNumber method 
    to find the missing number*/
    int ans = solution.missingNumber(nums);

    cout << "The missing number is: " << ans << endl;

    return 0;
}
