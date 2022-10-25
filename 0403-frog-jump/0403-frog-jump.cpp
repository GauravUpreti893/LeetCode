class Solution {
public:
    int check(int idx, int k, vector<vector<int>> &dp, unordered_map<int, int> &isvalid)
    {
        if (isvalid.find(idx) == isvalid.end())
            return 0;
        if (dp[isvalid[idx]][k] != -1)
            return dp[isvalid[idx]][k];
        // cout<<idx<<" "<<k<<endl;
        bool b1 = check(idx + k, k , dp, isvalid);
        if (b1)
        {
            // cout<<idx<<endl;
            return dp[isvalid[idx]][k] = true;
        }
        bool b2 = false;
        if (k != 1)
        b2 = check(idx + k - 1,  k - 1, dp, isvalid);
        if (b2)
        {
            // cout<<idx<<endl;
           return dp[isvalid[idx]][k] = true; 
        } 
        return dp[isvalid[idx]][k] = check(idx + k + 1, k + 1, dp, isvalid);
    }
    bool canCross(vector<int>& stones) {
       int n = stones.size();
        if (stones[1] - stones[0] != 1)
            return false;
        int mx = 2000;
        vector<vector<int>> dp(n, vector<int> (mx, -1));
        for (int i = 0; i < mx; i++)
        dp[n - 1][i] = 1;
        unordered_map<int, int> isvalid;
        for (int i = 0; i < n; i++)
            isvalid[stones[i]] = i;
        return check(stones[1], 1, dp, isvalid);
    }
};