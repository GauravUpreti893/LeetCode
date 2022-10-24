class Solution {
public:
    int maxLength(vector<string>& arr) {
        int n = arr.size(), m;
        vector<bitset<26>> length = {bitset<26>()};
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            bitset<26> bset;
            m = arr[i].size();
            for (int j = 0; j < m; j++)
                bset.set(arr[i][j] - 'a');
            if (bset.count() < m)
                continue;
            int m1 = length.size();
            for (int j = 0; j < m1; j++)
            {
                if ((length[j] & bset).any())
                {
                    continue;
                }
                length.push_back((length[j]|bset));
                int x = length[j].count() + m;
                mx = max(mx, x);
            }
        }
        return mx;
    }
};