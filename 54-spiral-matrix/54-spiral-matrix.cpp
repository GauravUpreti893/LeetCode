class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i = 0, i1 = m - 1, j = 0, j1 = n - 1,pos = 0;
        vector<int> ans(n*m);
        // ans[n*m] = 67;
        while (i <= i1 && j <= j1)
        {
            for (int k = j; k <= j1; k++)
            {
                // cout<<"first "<<matrix[i][k]<<" "<<pos<<" ";
                ans[pos++] = matrix[i][k];
                
            }
            if (pos == (n*m))
                break;
            i++;
            for (int k = i; k <= i1; k++)
            {
                // cout<<"second "<<matrix[k][j1]<<" "<<pos<<" ";
                ans[pos++] = matrix[k][j1];
            }
            if (pos == (n*m))
                break;
            j1--;
            for (int k = j1; k >= j; k--)
            {
                // cout<<"third "<<matrix[i1][k]<<" "<<pos<<" ";
                ans[pos++] = matrix[i1][k];
            }
            if (pos == (n*m))
                break;
            i1--;
            for (int k = i1; k >= i; k --)
            {
               // cout<<"fourth "<<matrix[k][j]<<" "<<pos<<" ";
                ans[pos++] = matrix[k][j];
            }
            if (pos == (n*m))
                break;
            j++;
        }
        return ans;
    }
};