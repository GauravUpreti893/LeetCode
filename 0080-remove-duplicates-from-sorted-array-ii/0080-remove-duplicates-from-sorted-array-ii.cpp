class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), k = 0, count = 1;
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[k] && count == 1)
            {
                count = 2;
                k++;
                nums[k] = nums[i];
            }
            else if (nums[i] != nums[k])
            {
                count = 1;
                k++;
                nums[k] = nums[i];
            }
        }
        return k + 1;
    }
};