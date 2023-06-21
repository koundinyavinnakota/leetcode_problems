class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        container = set()
        for num in nums:
            if num in container:
                return True
            container.add(num)
            
        return False
                    