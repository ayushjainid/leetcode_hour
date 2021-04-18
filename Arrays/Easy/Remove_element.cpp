// Problem Statement
// Given an array nums and a value val, remove all instances of that value in-place and return the new length.
// https://leetcode.com/problems/remove-element/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int count = 0;
      
        // Edge case
        if(nums.size() == 1) { 
            if(nums[0] == val) {
                return 0;
            }
        }
        else {
            for(int i = 0; i < nums.size(); i++) {
              
              // Replacing target value by 51
               if(nums[i] == val) {
                 nums[i] = 51;
                 count++;
               } 
            }
          
            //Sorting nums vector so that all 51 stack in the end
            sort(nums.begin(), nums.end());
        }
        
        // Returning the size of nums vector after reducing number of 51
        return nums.size() - count;
    }
};

// Time Complexity = O(nlog(n)), due to STL sort function.
