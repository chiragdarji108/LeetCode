class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        s = {}
        n = len(nums)
        for i in range(n):
            x = target-nums[i]
            if x not in s:
                s[nums[i]] = i
            else:
                return [s[x],i]
