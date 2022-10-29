
class Solution {
public:
   
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = {growTime[i], plantTime[i]};
        }
        sort(v.begin(), v.end(), greater<pair<int, int>>());
        int mx = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += v[i].second;
            mx -= v[i].second;
            mx = max(mx, v[i].first);
        }
        ans += mx;
        return ans;
    }
};