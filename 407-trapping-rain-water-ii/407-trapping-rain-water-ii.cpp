class Solution {
public:
    int trapRainWater(vector<vector<int>>& height) {
        int n = height.size(), m = height[0].size();
        vector<vector<int>> operated(n, vector<int> (m, 0));
        int water = 0;
        priority_queue< pair< int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>>> pq;
        for (int i = 0; i < m; i++)
        {
            operated[0][i] = 1;
            pq.push({height[0][i], {0, i}});
            operated[n - 1][i] = 1;
            pq.push({height[n - 1][i], {n - 1, i}});
        }
        for (int i = 0; i < n; i++)
        {
            operated[i][0] = 1;
            pq.push({height[i][0], {i, 0}});
            operated[i][m - 1] = 1;
            pq.push({height[i][m - 1], {i, m - 1}});
        }
        int h, i,j;
        while (!pq.empty())
        {
            h = pq.top().first;
            i = pq.top().second.first;
            j = pq.top().second.second;
            pq.pop();
            if (i > 0 && !operated[i - 1][j])
            {
                operated[i - 1][j] = 1;
                 if (height[i - 1][j] < h)
                 {
                     water += h - height[i - 1][j];
                     height[i - 1][j] = h;
                 }
                 pq.push({height[i  - 1][j], {i - 1, j}});

            }
            if (j > 0 && !operated[i][j - 1])
            {
                operated[i][j - 1] = 1;
                if (height[i][j - 1] < h)
                 {
                     water += h - height[i][j - 1];
                     height[i][j - 1] = h;
                 }
                 pq.push({height[i][j - 1], {i, j - 1}});
            }
            if (i < n - 1 && !operated[i + 1][j])
            {
                operated[i + 1][j] = 1;
                if (height[i + 1][j] < h)
                 {
                     water += h - height[i + 1][j];
                     height[i + 1][j] = h;
                 }
                 pq.push({height[i + 1][j], {i + 1, j}});
            }
            if (j < m - 1 && !operated[i][j + 1])
            {
                operated[i][j + 1] = 1;
                if (height[i][j + 1] < h)
                 {
                     water += h - height[i][j + 1];
                     height[i][j + 1] = h;
                 }
                 pq.push({height[i][j + 1], {i, j + 1}});
            }
        }
        return water;
    }
};