class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> triplets;
        
        for(int left = 0; left < size - 1; left++) {
            
            if( left > 0 && nums[left] == nums[left-1]) {
                continue;
            }
            
            int first = left+1;
            int last = size - 1;
            while(first < last) {
                if(nums[first] + nums[last] == -nums[left]) {
                    triplets.push_back({nums[left], nums[first], nums[last]});
                    first++;
                    last--;
                    while(first < last && nums[first] == nums[first-1]) {
                        first++;
                        }
                    while(first < last && nums[last] == nums[last+1]) {
                        last--;
                        }
                    }
                else if(-nums[left] > nums[first] + nums[last]) {
                    first++;
                    }
                else 
                    last--;
                }
            }
        return triplets;
    }
};