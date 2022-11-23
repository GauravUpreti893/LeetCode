class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            vector<bool> v(n, 0);
            for (int j = 0; j < n; j++)
            {
                if (v[matrix[i][j] - 1])
                    return false;
                v[matrix[i][j] - 1] = true;      
            }
            
        }
        for (int j = 0; j < n; j++)
        {
            vector<bool> v(n, 0);
            for (int i = 0; i < n; i++)
            {
                if (v[matrix[i][j] - 1])
                    return false;
                v[matrix[i][j] - 1] = true;
            }
            
        }
        return true;
    }
};