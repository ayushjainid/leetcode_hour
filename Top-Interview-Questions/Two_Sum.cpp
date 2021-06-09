// Problem Statement
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.

//Solution 1: Brute Force
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

// Time Complexity O(n^2), two iterations
// Space Complexuty O(1), since only variables are stored.

//Solution 2: Hashmaps
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            if (hash.find(target - nums[i]) != hash.end()) {
                return {hash[target - nums[i]], i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};


// Time Complexity O(n), first O(n) iteration, then O(1) for lookup in hashmap.
// Space Complexuty O(n), since it can store maximum n elements of array.

// Problem Link: https://leetcode.com/problems/two-sum/
// References: https://leetcode.com/problems/two-sum/discuss/860427/Brute-force-Hash-Table-optimized-hash-table.
