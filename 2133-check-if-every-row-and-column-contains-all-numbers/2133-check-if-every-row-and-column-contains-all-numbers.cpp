class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            vector<int> v(n, 0);
            for (int j = 0; j < n; j++)
            {
                v[matrix[i][j] - 1]++;
                if (v[matrix[i][j] - 1] == 2)
                    return false;
            }
            
        }
        for (int j = 0; j < n; j++)
        {
            vector<int> v(n, 0);
            for (int i = 0; i < n; i++)
            {
                v[matrix[i][j] - 1]++;
                if (v[matrix[i][j] - 1] == 2)
                    return false;
            }
            
        }
        return true;
    }
};