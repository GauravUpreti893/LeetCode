class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n = stations.size();
        priority_queue<int> mxheap;
        int fuel = startFuel;
        int dis;
        int ans = 0;
        if (fuel >= target)
            return 0;
        if (n == 0 || stations[0][0] > fuel)
            return -1;
        dis = 0;
        for (int i = 0; i < n; i++)
        {
            fuel -= (stations[i][0] - dis);
            dis = stations[i][0];
            if (fuel < 0)
            {
                while (!mxheap.empty())
                {
                    fuel += mxheap.top();
                    mxheap.pop();
                    ans++;
                    if (fuel >= 0)
                        break;
                }
                if (fuel < 0)
                    return -1;
            }
            mxheap.push(stations[i][1]);
        }
        dis = target - stations[n - 1][0];
        fuel -= dis;
        if (fuel < 0)
        {
            while (!mxheap.empty())
            {
                fuel += mxheap.top();
                mxheap.pop();
                ans++;
                if (fuel >= 0)
                    break;
            }
        }
        if (fuel < 0)
            return -1;
        return ans;
    }
};