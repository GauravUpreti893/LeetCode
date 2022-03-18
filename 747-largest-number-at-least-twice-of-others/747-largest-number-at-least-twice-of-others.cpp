class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ans = 0;
        int a = nums[0],b = -1;
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            if (nums[i] > a)
            {
                b = a;
                a = nums[i];
                ans = i;
            }
            else if (nums[i] > b)
            {
                b = nums[i];
            }
        }
        if (a >= 2*b)
        {
            return ans;
        }
        else
            return -1;
    }
};