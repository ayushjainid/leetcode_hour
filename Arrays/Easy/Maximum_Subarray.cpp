// Problem Statement
// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        // "max_sum" stores the maxinum sum and "current_sum" stores the current sum
        int max_sum=nums[0], current_sum=0;
        for(int i = 0; i < nums.size(); i++)
        {
            // Updating current_sum after adding new digit
            current_sum += nums[i];
            
            // If current sum is greater than max sum, then update max sum with current sum
            if(max_sum < current_sum) max_sum = current_sum;
          
            // If current sum is less than zero, then reintialise it to zero, thereby forgetting negative current sum
            if(current_sum < 0) current_sum = 0;
        }
        return max_sum;
    }
};

// Time Complexity: O(n)
// Kaden's Algorithm is used here - https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
