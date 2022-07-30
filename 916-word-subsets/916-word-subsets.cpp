class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int n = words2.size();
        vector<int> v(26,0), temp(26,0);
        vector<string> ans;
        int m;
        for (int i = 0; i < n; i++)
        {
            m = words2[i].size();
            for (int j = 0; j < m; j++)
            {
                temp[words2[i][j] - 'a']++;
            }
            for (int j = 0; j < 26; j++)
            {
                v[j] = max(v[j], temp[j]);
                temp[j] = 0;
            }
        }
        n = words1.size();
        for (int i = 0; i < n; i++)
        {
            m = words1[i].size();
            for (int j = 0; j < m; j++)
            {
                temp[words1[i][j] - 'a']++;
            }
            bool flag = 1;
            for (int j = 0; j < 26; j++)
            {
                if (temp[j] < v[j])
                {
                    flag = 0;
                }
                temp[j] = 0;
            }
            if (flag)
                ans.push_back(words1[i]);
        }
        return ans;
    }
};