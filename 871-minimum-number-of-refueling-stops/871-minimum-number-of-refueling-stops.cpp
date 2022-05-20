class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> pq;
        int n = stations.size();
        int count = 0;
        if (startFuel >= target)
            return 0;
        int discovered = 0;
        int fuelleft = startFuel;
        for (int i = 0; i < n; i++){
            
            if (discovered + fuelleft >= stations[i][0])
            {
                fuelleft = fuelleft - (stations[i][0] - discovered);
                discovered = stations[i][0];
            }
            else
            {
                fuelleft = fuelleft - (stations[i][0] - discovered);
                while (!pq.empty())
                {
                    fuelleft += pq.top();
                    pq.pop();
                    count++;
                    if (fuelleft >= 0)
                    {
                        break;
                    }
                }
                if (pq.empty() && fuelleft < 0)
                    return -1;
                discovered = stations[i][0];
            
            }
            pq.push(stations[i][1]);
        }
        fuelleft = fuelleft - (target - discovered);
        if (fuelleft >= 0)
            return count;
                while (!pq.empty())
                {
                    fuelleft += pq.top();
                    pq.pop();
                    count++;
                    if (fuelleft >= 0)
                    {
                        break;
                    }
                }
                if (pq.empty() && fuelleft < 0)
                    return -1;
        return count;
    }
};