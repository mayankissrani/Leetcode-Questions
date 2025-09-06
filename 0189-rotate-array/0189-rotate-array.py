class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums) 
        k = k%n 
        nums  [0:n-k] = reversed (nums  [0:n-k] )
        nums [n-k:n] = reversed (nums [n-k:n] ) 
        nums.reverse()
        