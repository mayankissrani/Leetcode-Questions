
// this solution has time complexity of O(n) 

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int indx = 0;
        int c0 = 0, c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                c0++;
            else if (nums[i] == 1)
                c1++;
            else
                c2++;
        }
        for (int i = 0; i < c0; i++)
          nums[indx++] = 0;
        for (int i = 0; i < c1; i++)
            nums[indx++] = 1;
        for (int i = 0; i < c2; i++)
            nums[indx++] = 2;
    }
};
