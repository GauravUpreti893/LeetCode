class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> freq(101, 0);
        int n = heights.size();
        for (int i = 0; i < n; i++)
        {
            freq[heights[i]]++;
        }
        int j = 0;
        for (int i = 1; i <= 100; i++)
        {
            int m = freq[i];
            for (int k = 0; k < m; k++)
            {
                if (heights[j] != i)
                {
                    // cout<<i<<endl;
                    count++;
                }
                j++;
                if (j == n)
                    return count;
            }
        }
        return count;
    }
};