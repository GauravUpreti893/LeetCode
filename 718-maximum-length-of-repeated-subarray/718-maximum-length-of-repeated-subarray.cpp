class Solution {
public:
    int find(vector<int>&nums1, vector<int>&nums2, int i, int j, vector<vector<int>> &table, int &ans)
    {
        if (i < 0 || j < 0)
            return 0;
        if (table[i][j] != -1)
            return table[i][j];
        if (nums1[i] == nums2[j])
        {
            table[i][j] = find(nums1, nums2, i - 1, j - 1, table, ans) + 1;
            ans = max(ans, table[i][j]);
        }
        else
        {
            table[i][j] = 0;
        }
        find(nums1, nums2, i, j - 1, table, ans);
        find(nums1, nums2, i - 1, j, table, ans);
        return table[i][j];
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<vector<int>> table(n, vector<int> (m, -1));
        int ans = 0;
        find(nums1, nums2, n - 1, m - 1, table, ans);
        return ans;
    }
};