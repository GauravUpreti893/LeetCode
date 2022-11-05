class Solution {
public:
    bool doexist(int i, int j, string &word, int idx, vector<vector<char>> &board)
    {
        if (i == board.size() || i < 0 || j == board[0].size() || j < 0 || board[i][j] != word[idx])
            return false;
        char c = board[i][j];;
        int x, y;
        idx++;
        if (idx == word.size())
            return true;
        board[i][j] = '0';
        if (doexist(i + 1, j, word, idx, board) || doexist(i, j + 1, word, idx, board) || doexist(i - 1, j, word, idx, board) || doexist(i, j - 1, word, idx, board))
            return true;
        board[i][j] = c;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = word.size();
        int n1 = board.size(), n2 = board[0].size();
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                if(doexist(i, j, word, 0, board))
                    return true;
            }
        }
        return false;
    }
};