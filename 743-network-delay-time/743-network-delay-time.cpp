class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int mx = 1e6;
        int m = times.size();
        int *t = new int[n + 1];
        for (int i = 0; i <= n; i++)
        {
            t[i] = mx;
        }
        t[k] = 0;
        int x,y,w;
        for (int k = 1; k < n;k++)
        {
            for (int i = 0; i < m; i++)
            {
                x = times[i][0];
                y = times[i][1];
                w = times[i][2];
                t[y] = min(t[y],t[x] + w);
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (t[i] == mx)
                return -1;
            ans = max(ans,t[i]);
        }
        return ans;
    }
};
