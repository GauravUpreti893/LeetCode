class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char, int>> row(9), col(9);
        vector<vector<unordered_map<char, int>>> mp(3, vector<unordered_map<char, int>>(3));
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] == '.')
                    continue;
                if (mp[(i/3)][j/3][board[i][j]] == 1 || row[i][board[i][j]] == 1 || col[j][board[i][j]] == 1)
                    return false;
                mp[i/3][j/3][board[i][j]] = 1;
                row[i][board[i][j]] = 1;
                col[j][board[i][j]] = 1;
            }
        }
        return true;
    }
};