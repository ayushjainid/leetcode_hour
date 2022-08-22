class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
//         //1: Brute force - Improve understanding
//         int n = nums.size();
//         for(int i = 0; i < nums.size(); i++) {
//             for(int j = i; j <= nums.size(); j++) {
                
//                 int int_min = INT_MAX, int_max = INT_MIN, prev = INT_MIN;
//                 for(int k = i; k < j; k++) {
//                     int_min = min(int_min, nums[k]);
//                     int_max = max(int_max, nums[k]);
//                 }
//                 if((i > 0 && nums[i-1] > int_min) || (j < nums.size() && nums[j] < int_max)) {
//                     continue;
//                 }
//                 int k = 0;
//                 while(k < i && prev <= nums[k]) {
//                     prev = nums[k];
//                     k++;
//                 }
//                 if(k != i) {
//                     continue;
//                 }
//                 k = j;
//                 while(k < nums.size() && prev <= nums[k]) {
//                     prev = nums[k];
//                     k++;
//                 }
//                 if(k == nums.size()) {
//                     n = min(n, j-i);
//                 }
//             }
//         }
//         return n;
        
        // //2. Selection sort strategy
        // int l = nums.size(), r = 0;
        // for(int i = 0; i < nums.size(); i++) {
        //     for(int j = i+1; j < nums.size(); j++) {
        //         if(nums[j] < nums[i]) {
        //             r = max(r, j);
        //             l = min(l, i);
        //         }
        //     }
        // }
        // return r-l < 0 ? 0 : r-l+1;
        
        
        //3. Compare sorted arrays
        vector<int> nums_sorted = nums;
        sort(nums_sorted.begin(), nums_sorted.end());
        
        int start = nums.size(), end = 0;
        for(int i = 0; i < nums_sorted.size(); i++) {
            if(nums_sorted[i] != nums[i]) {
                start = min(start, i);
                end = max(end, i);
            }
        }
        return (end - start >= 0 ? end - start + 1 : 0);
        
            
        
    }
};