class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int ans = 0, sum = 0;
        for (int i = 0;i < n; i++)
        {
            if (nums[i] == 1)
            {
                sum++;
            }
            else 
            {
                ans = max(ans, sum);
                sum = 0;
            }
        }
        ans = max(ans, sum);
        return ans;
    }
};