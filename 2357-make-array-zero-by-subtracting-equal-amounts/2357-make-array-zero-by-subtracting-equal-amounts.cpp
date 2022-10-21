class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        vector<int> table(101, 0);
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            table[nums[i]] = 1;
        }
        int sub = 0, ans = 0, diff;
        for (int i = 1; i <= 100; i++)
        {
            if (table[i])
            {
                ans++;
                diff = i - sub;
                sub += diff;
            }
        }
        return ans;
    }
};