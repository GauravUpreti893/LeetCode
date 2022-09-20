class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        // if (m > n)
        // {
        //     swap(m, n);
        //     swap(nums1, nums2);
        // }
        vector<vector<int>> table(2, vector<int> (m + 1, 0));
        int mx = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (nums1[i - 1] == nums2[j - 1])
                {
                    table[i%2][j] = table[!(i%2)][j - 1] + 1;
                    mx = max(mx, table[i%2][j]);
                }
                else
                {
                    table[i%2][j] = 0;
                }
            }
        }
        return mx;
    }
};