// solved by Dutch National Flag algo
// time complexity - O(n) 
// no extra space is used ,this is the optimal solution

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0, high = n - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1)
                mid++;
            else {
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }
};
