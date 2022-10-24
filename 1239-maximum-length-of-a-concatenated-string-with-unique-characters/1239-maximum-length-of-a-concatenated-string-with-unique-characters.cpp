class Solution {
public:
    int maxLength(vector<string>& arr) {
        int n = arr.size();
        vector<string> vec;
        for (int i = 0; i < n; i++)
        {
            bool flag = true;
            vector<bool> freq(26, 0);
            int m = arr[i].size();
            for (int j = 0; j < m; j++)
            {
                if (freq[arr[i][j] - 'a'] )
                {
                    flag = false;
                    break;
                }
                freq[arr[i][j] - 'a'] = 1;
            }
            if (flag)
            {
                vec.push_back(arr[i]);
            }
        }
        n = vec.size();
        int ans = 0;
        int range = ceil(pow(2, n));
        for (int i = 0; i < range; i++)
        {
            int v = i;
            string s;
            for (int j = 0; j < n; j++)
            {
                if (v&1)
                {
                    s += vec[j];
                }
                v = v>>1;
            }
            bool flag = true;
            vector<bool> freq(26, 0);
            int m = s.size();
            for (int j = 0; j < m; j++)
            {
                if (freq[s[j] - 'a'])
                {
                    flag = false;
                    break;
                }
                freq[s[j] - 'a'] = 1;
            }
            if (flag)
            {
                ans = max(ans, m);
            }
        }
        return ans;
    }
};