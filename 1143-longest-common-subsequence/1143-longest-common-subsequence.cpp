class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(), m = text2.size();
        if (m > n)
        {
            swap(m, n);
            swap(text1, text2);
        }
        vector<vector<int>> table(2, vector<int> (m + 1, 0));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (text1[i - 1] == text2[j - 1])
                {
                    table[i%2][j] = table[!(i%2)][j - 1] + 1;
                }
                else
                {
                    table[i%2][j] = max(table[i%2][j - 1], table[!(i %2)][j]);
                }
            }
        }
        return table[n%2][m]; 
    }
};