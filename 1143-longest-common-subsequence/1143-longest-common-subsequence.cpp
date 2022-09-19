class Solution {
public:
    int longest(int n, int m, vector<vector<int>> &table, string &text1, string &text2, int idx, int idx1)
    {
        if (idx == n || idx1 == m)
            return 0;
        if (table[idx][idx1] != -1)
            return table[idx][idx1];
        int count = 0;
        if (text1[idx] == text2[idx1])
        {
            count++;
            count += longest(n, m, table, text1, text2, idx + 1, idx1 + 1);
        }
        else
        {
            count = max(longest(n, m ,table, text1, text2, idx + 1, idx1), longest(n, m, table, text1, text2, idx, idx1 + 1));
        }
        return table[idx][idx1] = count;
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(), m = text2.size();
        vector<vector<int>> table(n, vector<int> (m, -1));
        return longest(n, m, table, text1, text2, 0, 0);
    }
};