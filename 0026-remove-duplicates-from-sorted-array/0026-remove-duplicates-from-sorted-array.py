class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        hash_dict = {} 

        for i in nums: 
            hash_dict[i] = hash_dict.get(i, 0) + 1

        result = [] 
        for i in nums: 
            if i in hash_dict:
                result.append(i) 
                hash_dict.pop(i)

        nums[:] = result   # modify nums in place
        return len(nums)
