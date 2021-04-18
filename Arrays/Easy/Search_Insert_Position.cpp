// Problem Statement
// Given a sorted array of distinct integers and a target value, return the index if the target is found. 
// If not, return the index where it would be if it were inserted in order.
// https://leetcode.com/problems/search-insert-position/submissions/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] == target) return i;
          
            //If the target element is smaller than the array element, then it will be replace the array element
            if(nums[i] > target) return i;
        }
        //If the target element is bigger than all the array elements, then it will be inserted at last position
        return nums.size();
    }
};

// Time Complexity: O(n)
