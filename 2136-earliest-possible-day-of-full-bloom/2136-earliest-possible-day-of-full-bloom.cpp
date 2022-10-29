bool compare(pair<int,int>&a, pair<int, int> &b)
{
    if (a.first > b.first)
        return true;
    else if (a.first < b.first)
        return false;
    else
    {
        if (a.second < b.second)
            return true;
        else
            return false;
    }
}
class Solution {
public:
   
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = {growTime[i], plantTime[i]};
        }
        sort(v.begin(), v.end(), compare);
        int mx = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            // cout<<v[i].first<<" "<<v[i].second<<endl;
            ans += v[i].second;
            mx -= v[i].second;
            mx = max(mx, v[i].first);
        }
        ans += mx;
        // cout<<mx<<endl;
        return ans;
    }
};