class Solution {
public:
    bool doexist(int n, int m, vector<vector<char>>& board, string& word, int idx)
    {
        if ((n < 0) || (m < 0) || (n == board.size()) || (m == board[0].size()) || (board[n][m] != word[idx]))
            return false;
        char c = board[n][m];
        board[n][m] = '0';
        idx++;
        if (idx == word.size())
          return true;  
        if (doexist(n + 1, m, board, word, idx) || doexist(n - 1, m, board, word, idx) || doexist(n, m + 1, board, word, idx) || doexist(n, m - 1, board, word, idx))
            return true;
        board[n][m] = c;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(doexist(i, j, board, word, 0))
                    return true;
            }
        }
        return false;
    }
};