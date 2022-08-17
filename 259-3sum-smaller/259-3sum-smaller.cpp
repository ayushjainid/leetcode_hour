class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        if(nums.size()<3) {
            return 0;
        }
        int count = 0;
        for(int first = 0; first < nums.size() - 2; first++) {
            count += findPair(nums, target-nums[first], first);
        }
        return count;
    }
    
private:
    int findPair(vector<int> &nums, int targetSum, int first) {
        int count = 0;
        int left = first+1, right = nums.size()-1;
        while(left < right) {
            if(nums[left] + nums[right] < targetSum) {
                count += right - left;
                left++;
            } else {
                right--;
            }
        }
        return count;
    }
};