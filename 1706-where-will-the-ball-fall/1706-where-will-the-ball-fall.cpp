class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> ans(m);
        for (int i = 0; i < m; i++)
        {
            int col = i;
            bool flag = true;
            
            for (int j = 0; j < n; j++)
            {
                // cout<<j<<" "<<col<<endl;
                if ((grid[j][col] == 1 && (col < m - 1 && grid[j][col + 1] == -1)) || (grid[j][col] == -1 && (col > 0 && (grid[j][col - 1]) == 1)))
                {
                    
                    ans[i] = -1;
                    flag = false;
                    break;
                }
                col += grid[j][col]; 
                if (col < 0 || col >= m)
                {
                    ans[i] = -1;
                    flag = false;
                    break;
                }
            }
            if (flag)
            ans[i] = col;
        }
        return ans;
    }
};