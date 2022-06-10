class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int> mp;
        int sum, n = wall.size(), m;
        for (int i = 0; i < n; i++)
        {
            sum = 0;
            m = wall[i].size();
            for (int j = 0; j < m - 1; j++)
            {
                sum += wall[i][j];
                mp[sum]++;
            }
        }
        unordered_map<int,int>::iterator it;
        int ans = 0;
        for (it = mp.begin(); it != mp.end(); it++)
        {
            ans = max(ans,it->second);
        }
        return n - ans;
    }
};