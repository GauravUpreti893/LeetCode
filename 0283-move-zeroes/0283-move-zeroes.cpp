class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = -1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i])
            {
                k++;
                nums[k] = nums[i];
            }
        }
        for (int i = k + 1; i < n; i++)
            nums[i] = 0;
        return;
    }
};