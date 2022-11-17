class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int> prev;
        prev.push_back(triangle[0][0]);
        int n = triangle.size();
        for (int i = 1; i < n; i++)
        {
            vector<int> curr(i + 1);
            curr[0] = prev[0] + triangle[i][0];
            for (int j = 1; j < i; j++)
            {
                curr[j] = min(prev[j - 1], prev[j]) + triangle[i][j];
            }
            curr[i] = prev[i - 1] + triangle[i][i];
            prev = curr;
        }
        int mn = prev[0];
        for (int i = 1; i < n; i++)
        {
            mn = min(mn, prev[i]);
        }
        return mn;
    }
};