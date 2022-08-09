class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
//         //1. Brute force
//         vector<int> resultIndices;
        
//         for(int start = 0; start < nums.size(); start++) {
//             for(int end = start + 1; end < nums.size(); end++) {
//                 if(nums[start] + nums[end] == target) {
//                     resultIndices.push_back(start);
//                     resultIndices.push_back(end);
//                 }
//             }
//         }
//         return resultIndices;
        
            //2. Hash map based
            unordered_map<int, int> hash;
        
        for(int i = 0; i < nums.size(); i++) {
            int numToFind = target - nums[i];
            
            if(hash.find(numToFind) != hash.end()) {
                return {hash[numToFind], i};
            }
            else {
                hash[nums[i]] = i;
            }
        }
        return {};
    }
};