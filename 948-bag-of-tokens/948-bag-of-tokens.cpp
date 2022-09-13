class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        int ans = 0, res = 0;
        sort(tokens.begin(), tokens.end());
        int j = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (tokens[i] <= power)
            {
                power -= tokens[i];
                ans++;
                res = max(res, ans);
            }
            else
            {
                if (!ans)
                    return ans;
                i--;
                power += tokens[j];
                ans--;
                j--;
            }
        }
        return res;
    }
};