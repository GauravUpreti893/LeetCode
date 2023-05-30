//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int xy[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}}; 
    bool dfs(vector<vector<char>> &board, string &word, int idx, int a, int b)
    {
        int n = board.size();
        int m = board[0].size();
        int n1 = word.size();
        if (idx == n1)
        return true;
        char c = board[a][b];
        board[a][b] = '0';
        for (int i = 0; i < 4; i++)
        {
            int x = a + xy[i][0];
            int y = b + xy[i][1];
            if (x >= 0 && x < n && y >= 0 && y < m &&  board[x][y] == word[idx])
            {
                if (dfs(board, word, idx + 1, x, y))
                return true;
            }
        }
        board[a][b] = c;
        return false;
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (board[i][j] == word[0] && dfs(board, word, 1, i, j))
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends