class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(2, 1);
        for (int idx = n - 1; idx >= 0; idx--)
        {
            if (s[idx] == '0')
            {
                dp[idx&1] = 0;
                continue;
            }
            int no = s[idx] - '0', flag = false;;
            if (idx + 1 < n)
            {
                no = no * 10 + s[idx + 1] - '0';
                if (no <= 26)
                flag = true;
            }
            if (!flag)
                dp[idx&1] = 0;
            dp[idx&1] += dp[!(idx&1)];
        }
        return dp[0];
    }
};