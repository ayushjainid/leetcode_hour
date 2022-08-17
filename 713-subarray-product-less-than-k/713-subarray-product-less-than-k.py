class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        l, product, result = 0, 1, 0
        
        for r in range(len(nums)):
            product *= nums[r]
            if product < k:
                result += r - l + 1
            else:
                while l <= r and product >= k:
                    product /= nums[l]
                    l += 1
                result += r-l+1  
            
        return result