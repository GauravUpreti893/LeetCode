class Solution {
public:
    int **table;
    int longest(string &text1, string&text2, int n, int m)
    {
        if (table[n][m] >= 0)
            return table[n][m];
            if (text1[n - 1] == text2[m - 1])
            {
                table[n][m] = longest(text1,text2,n - 1, m - 1) + 1;
            }
            else
                table[n][m] = max(longest(text1,text2, n - 1, m ), longest(text1,text2, n, m - 1));
        return table[n][m];
    }
    int longestCommonSubsequence(string &text1, string& text2) {
        int n = text1.size();
        int m = text2.size();
        // vector<vector<int>> table(n + 1,vector<int> (m + 1, -1));
        table = new int*[n + 1];
        for (int i = 0; i <= n; i++)
        {
            table[i] = new int[ m + 1];
        }
        // for (int i = 1; i <= n; i++)
        // {
        //     for (int j = 1; j <= m; j++)
        //     {
        //         table[i][j] = -1;
        //     }
        // }
        for (int i = 0; i <= n; i++)
        {
            table[i][0] = 0;
        }
        for (int i = 0; i <= m; i++)
        {
            table[0][i] = 0;
        }
        // for (int i = 0; i <= n; i++)
        // {
        //     for (int j = 0; j <= m; j++)
        //     {
        //         cout<<table[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int ans =  longest(text1,text2,n,m);
        // for (int i = 0; i <= n; i++)
        // {
        //     for (int j = 0; j <= m; j++)
        //     {
        //         cout<<table[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return ans;
        // return 1;
    }
};