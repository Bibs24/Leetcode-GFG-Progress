class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        def bs( nums: List[int], target: int) -> int:
            l,r  = 0, len(nums)
            while l<r:
                m = (l+r)//2
                if nums[m] < target:
                    l = m  + 1
                else:
                    r = m
            return l
        
        l = bs(nums,target)
        if(l == len(nums) or nums[l] != target):
            return [-1,-1]
        r = bs(nums,target+1)
        return [l,r-1];
        