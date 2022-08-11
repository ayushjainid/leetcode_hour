class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        //Keeping track of index of last unique number
        int unique = 0;
        for(int start = 1; start < nums.size(); start++) {
            
            //When unique number is found on start index, increment the unique counter and 
            //then swap the number on unique++ position with new unique number found
            if(nums[start] != nums[unique]) {
                unique++;
                nums[unique] = nums[start];
            }
        }
        //Returning unique+1 as number of digits is expected instead of index
        return unique+1;
    }
};