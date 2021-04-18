// Problem Statement
// Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // Edge cases
        if (nums.size() <= 1) {return nums.size();}
        else {
            
            int i = 0, j = 1;
            for(j = 1; j<nums.size(); j++) {
                
                // If the ith and jth element are not same, copy the jth element next to ith element 
                if(nums[i] != nums[j]) {
                    i+=1;
                    nums[i] = nums[j];  
                }
            }
            
            // i is the index, so unique elements will be i+1
            return i+1;
        }
    }
};

// Time complexity: O(n)

 
