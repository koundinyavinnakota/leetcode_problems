from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        sol = []
        
        for i in nums:
            print("i : ",i)
            for j in range(nums.index(i) + 1,len(nums)):
                print("j : ",nums[j])
                if i + nums[j] == target:
                    return [nums.index(i), j]
        return []

if __name__ == "__main__":
    s = Solution()
    print(s.twoSum([1,2,3],5))