class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //sort input vector
        sort(nums.begin(), nums.end());
        int n = nums.size();
        //initialize result vector of vectors
        vector<vector<int>> res;
        
        //Start i in first loop from [0, length-3]
        for(int i=0; i<n-3; i++) {
            if(i>0 && nums[i-1] == nums[i]) {
                continue;
            }
            
            for(int j = i+1; j<n-2; j++) {
                if(j>i+1 && nums[j-1] == nums[j]) {
                    continue;
                }
                int left = j+1, right = n-1;
                while(left < right) {
                    long long new_target = static_cast<long long>(target) - static_cast<long long>(nums[i]) - static_cast<long long>(nums[j]);
                    if(static_cast<long long> (nums[left] + nums[right]) == new_target) {
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;
                        while(left < right && nums[left] == nums[left-1]) {
                            left++;
                        }
                        while(left < right && nums[right] == nums[right+1]) {
                            right--;
                        }
                    }
                    else if(nums[left] + nums[right] < new_target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }
        
        //If i>0 && nums[i-1] == nums[i] skip
        
        //Nested loop for j from [i+1, length-2]
        
        //If j>i+1 && nums[j-1] == nums[j] skip
        
        //left = j+1, right = length-1
        //while left < right
            //If nums[j] + nums[left] + nums[right] = target - nums[i]
                //append quad
                //while left < right && nums[left] == nums[left-1] left++
                //while left < right && nums[right] == nums[right+1] right--
        
            //else if nums[j] + nums[left] + nums[right] > target - nums[i] right--
            //else left++
    return res;
    }
};