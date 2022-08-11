class Solution(object):
    def removeDuplicates(self, nums):
        unique = set()
        
        l = 0
        for num in nums:
            if num not in unique:
                unique.add(num)
                nums[l] = num
                l+=1
                
        return l
        