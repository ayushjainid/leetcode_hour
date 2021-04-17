
// Problem Statement
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        std::vector <int> s;
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i+1; j<nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    s.push_back(i);
                    s.push_back(j);
                }
            }
        }
        return s;
    }
};

// Time Complexity O(n^2), can be improved.
