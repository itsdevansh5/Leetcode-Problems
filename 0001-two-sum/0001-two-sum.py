class Solution(object):
    def twoSum(self, nums, target):
        seen={}
        for i,num in enumerate(nums):
            comp=target-num
            if comp in seen:
                return [seen[comp],i]
            seen[num]=i    
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        