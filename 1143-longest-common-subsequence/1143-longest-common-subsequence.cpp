class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> table(n + 1,vector<int> (m + 1));
        for (int i = 0; i <= m; i++)
        {
            table[0][m] = 0;
        }
        for (int i = 0; i <= n; i++)
        {
            table[n][0] = 0;
        }
        for (int i = 1; i <= n;i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (text1[i - 1] == text2[j - 1])
                {
                    table[i][j] = table[i - 1][j - 1] + 1;
                }
                else
                {
                    table[i][j] = max(table[i - 1][j],table[i][j - 1]);
                }
            }
        }
        return table[n][m];
    }
};