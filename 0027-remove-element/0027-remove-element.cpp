class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size(), k = -1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != val)
            {
                k++;
                nums[k] = nums[i];
            }
        }
        return k + 1;
    }
};