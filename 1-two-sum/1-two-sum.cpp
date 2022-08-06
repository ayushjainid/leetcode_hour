class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> resultIndices;
        for(int start = 0; start < nums.size(); start++) {
            for(int end = start+1; end <nums.size(); end++) {
                if(nums[start] + nums[end] == target) {
                    resultIndices.push_back(start);
                    resultIndices.push_back(end);
                }
            }
        }
        return resultIndices;
    }
};