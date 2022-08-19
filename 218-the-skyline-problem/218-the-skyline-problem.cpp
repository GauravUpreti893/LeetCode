class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<pair<int,int>> points;
        vector<vector<int>> ans;
        int n = buildings.size();
        for (int i = 0; i < n; i++)
        {
            points.push_back({buildings[i][0], -buildings[i][2]});
            points.push_back({buildings[i][1], buildings[i][2]});
        }
        sort(points.begin(), points.end());
        int m = points.size();
        priority_queue<int> pq;
        pq.push(0);
        int currheight = 0;
        // cout<<m<<endl;
        unordered_map<int,int> mp;
        for (int i = 0; i < m; i++)
        {
            while (mp[pq.top()] > 0)
            {
                mp[pq.top()]--;
                pq.pop();
            }
           if (points[i].second > 0)
           {
               if(pq.top() == points[i].second)
               {
                   pq.pop();
                   while (mp[pq.top()] > 0)
                    {
                        mp[pq.top()]--;
                        pq.pop();
                    }
               }
               else
               {
                   mp[points[i].second]++;
               }
           }
           else
           {
                pq.push(-points[i].second);
           }
           int mxheight = pq.top();
            if (mxheight != currheight)
            {
                vector<int> v(2);
                v[0] = points[i].first;
                v[1] = abs(mxheight);
                // cout<<v[1]<<endl;
                ans.push_back(v);
            }
            // currheight = max(currheight, mxheight);
            currheight = mxheight;
        }
        return ans;
    }
};