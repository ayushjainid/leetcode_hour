//Problem: Given a binary array nums, return the maximum number of consecutive 1's in the array.
// Input: nums = [1,1,0,1,1,1]
// Output: 3

// Solution 1
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int length = nums.size();
        int window = 0;
        vector<int> windows;
        
        for(int i=0; i<length; i++) {
            if(nums[i] == 1) {
                window++;
                windows.push_back(window);
            }
            else {
                window = 0;
            }
        }
        
        // to ensure windows is not empty while using *max_element as it doesnt accepts NULL vectors
        int answer = 0;
        if(windows.size() == 0) return answer;
        else answer = *max_element(max_win.begin(), max_win.end());
        return answer;  
    }
};
// Time complexity: O(n)
