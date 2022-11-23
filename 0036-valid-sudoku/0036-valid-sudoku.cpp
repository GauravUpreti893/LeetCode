class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char, int>> row(9), col(9);
        for (int k = 0; k < 9; k += 3)
        {
            for (int l = 0; l < 9; l += 3)
            {
                unordered_map<char, int> mp;
                for (int i = k; i < k + 3; i++)
                {
                    for (int j = l; j < l + 3; j++)
                    {
                        if (board[i][j] == '.')
                            continue;
                        if (mp[board[i][j]] == 1 || row[i][board[i][j]] == 1 || col[j][board[i][j]] == 1)
                            return false;
                        mp[board[i][j]] = 1;
                        row[i][board[i][j]] = 1;
                        col[j][board[i][j]] = 1;
                    }
                }
            }
        }
        
        return true;
    }
};