class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int result = 0;
        int minDiff = INT_MAX;
        int sum;
        
        int right = nums.size() - 1;
        for(int left = 0; left < nums.size()-2; left++) {
            if(left > 0 && nums[left] == nums[left-1]) {
                continue;
            }
            
            int first = left + 1;
            int last = nums.size() - 1;
            
            while(first < last) {
                sum = nums[first] + nums[last] + nums[left];
                
                if(abs(target - sum) < minDiff) {
                    result = sum;
                    minDiff = abs(target - sum);
                }
                else if (sum > target) {
                    last--;
                }
                else if(sum < target) {
                    first++;
                }
                else {
                    return sum;
                }
            }
        }
        return result;
    }
};