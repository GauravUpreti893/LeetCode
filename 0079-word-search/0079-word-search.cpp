class Solution {
public:
    bool doexist(int i, int j, string &word, int idx, vector<vector<char>> &board)
    {
        if (i == board.size() || i < 0 || j == board[0].size() || j < 0 || board[i][j] != word[idx])
        {
            return false;
        }
        vector<pair<int, int>> xy{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        char c = board[i][j];;
        int x, y;
        idx++;
        if (idx == word.size())
            return true;
        board[i][j] = '0';
        for (int k = 0; k < 4; k++)
        {
            x = i + xy[k].first;
            y = j + xy[k].second;
            bool a = doexist(x, y, word, idx, board);
            if (a)
                return true;
        }
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
                bool a = doexist(i, j, word, 0, board);
                if (a)
                    return true;
            }
        }
        return false;
    }
};