class Solution {
public:
    vector<int> partitionLabels(string &s) {
        int n = s.length();
        vector<int> ans;
        vector<pair<int,int>> v(26,{-1,-1});
        for (int i = 0; i < n; i++)
        {
            if (v[s[i] - 97].first == -1)
                v[s[i] - 97].first = i;
            v[s[i] - 97].second = i;
        }
        sort(v.begin(),v.end());
        int mx = -1;
        int i = 0;
        while (v[i].first == -1)
        {
            i++;
        }
        int f = v[i].first;
        for (; i < 25; i++)
        {
            mx = max(mx,v[i].second);
            if (mx < v[i + 1].first)
            {
                ans.push_back(mx - f + 1);
                f = v[i + 1].first;
            }
            if (mx == n - 1)
            {
                ans.push_back(mx - f + 1);
                break;
            }
        }
        if (v[25].first == n - 1 || v[25].second == n - 1)
        {
            // ans.push_back(v[25].second - v[25].first + 1);
            ans.push_back(n - 1 - f + 1);   
        }
        return ans;
    }
};