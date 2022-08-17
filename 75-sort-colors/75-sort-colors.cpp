class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
        int curr = 0;
        while(curr <= high) {
            if(nums[curr] == 0) {
                swap(nums[curr++], nums[low++]);
            }
            else if(nums[curr] == 2) {
                swap(nums[curr], nums[high--]);
            }
            else curr++;
        }
    }
};