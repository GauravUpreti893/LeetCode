class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> ans(2);
        unordered_map<int, int> win, lost;
        int n = matches.size();
        for (int i = 0; i < n; i++)
        {
            win[matches[i][0]]++;
            lost[matches[i][1]]++;
        }
        for (auto it = win.begin(); it != win.end(); it++)
        {
            if (!lost[it->first])
                ans[0].push_back(it->first);
        }
        for (auto it = lost.begin(); it != lost.end(); it++)
        {
            if (it->second == 1)
                ans[1].push_back(it->first);
        }
        sort(ans[0].begin(), ans[0].end());
        sort(ans[1].begin(), ans[1].end());
        return ans;
    }
};