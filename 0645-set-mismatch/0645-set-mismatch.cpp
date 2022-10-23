class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n + 1, 0);
        int idx1 = -1, idx2 = -1;
        for (int i = 0; i < n; i++)
        {
            freq[nums[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (freq[i] == 2)
                idx1 = i;
            else if (freq[i] == 0)
                idx2 = i;
            if (idx1 != -1 && idx2 != -1)
                break;
        }
        vector<int> ans(2);
        ans[0] = idx1;
        ans[1] = idx2;
        return ans;
    }
};