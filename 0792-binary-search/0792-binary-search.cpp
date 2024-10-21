class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1; // Corrected the 'end' initialization
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (target > nums[mid]) {
                st = mid + 1;
            } else if (target < nums[mid]) {
                end = mid - 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
};
