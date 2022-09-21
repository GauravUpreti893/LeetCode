class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int even = 0;
        int n = nums.size();
        int q = queries.size();
        for (int i = 0; i < n; i++)
        {
            if (!(nums[i]%2))
            {
                even += nums[i];
            }
        }
        vector<int> ans(q);
        int idx, v;
        for (int i = 0; i < q; i++)
        {
            v = queries[i][0];
            idx = queries[i][1];
            if (!(nums[idx] % 2))
            {
                even -= nums[idx];
            }
            nums[idx] += v;
            if (!(nums[idx]%2))
            {
                even += nums[idx];
            }
            ans[i] = even;
        }
        return ans;
    }
};