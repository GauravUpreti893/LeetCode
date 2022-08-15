class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int mx = 0;
        int n = wall.size(), m;
        int sum = 0;
        unordered_map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            m = wall[i].size();
            sum = 0;
            for (int j = 0; j < m - 1; j++)
            {
                sum += wall[i][j];
                mp[sum]++;
            }
        }
        for (auto it = mp.begin(); it!= mp.end(); it++)
        {
            mx = max(mx, it->second);
        }
        return n - mx;
    }
};