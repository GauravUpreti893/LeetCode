//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long minTime(int n, vector<int> &locations, vector<int> &types) {
        // code here
        unordered_map<long long, long long> start, end;
        for (int i = 0; i < n; i++)
        {
            if (start.find(types[i]) == start.end())
            {
                start[types[i]] = locations[i];
            }
            else
            {
                start[types[i]] = min(start[types[i]], (long long)locations[i]);
            }
            if (end.find(types[i]) == end.end())
            {
                end[types[i]] = locations[i];
            }
            else
            {
                end[types[i]] = max(end[types[i]], (long long)locations[i]);
            }
        }
        vector<int> type;
        for (auto it = start.begin(); it != start.end(); it++)
        {
            type.push_back(it->first);
        }
        n = type.size();
        sort(type.begin(), type.end());
        vector<vector<long long>> dp(n + 1, vector<long long> (2, 0));
        dp[n][0] = abs(start[type[n - 1]]);
        dp[n][1] = abs(end[type[n - 1]]);
        for (int idx = n - 1; idx >= 0; idx--)
        {
            long long pos = 0;
            if (idx)
            {
                pos = start[type[idx - 1]];
            }
            int t = type[idx];
            bool flag = 0;
            if (pos <= start[t])
            {
                dp[idx][flag] = dp[idx + 1][1] + end[t] - pos;
            }
            else if (pos >= end[t])
            {
                dp[idx][flag] = dp[idx + 1][0] +  pos - start[t];
            }
            else
            {
                 dp[idx][flag] = min(dp[idx + 1][0] + end[t] - pos + end[t] - start[t], dp[idx + 1][1] + pos - start[t] + end[t] - start[t]);
            }
            flag = 1;
            if (idx)
            {
                pos = end[type[idx - 1]];
                if (pos <= start[t])
                {
                     dp[idx][flag] = dp[idx + 1][1] + end[t] - pos;
                }
                else if (pos >= end[t])
                {
                     dp[idx][flag] = dp[idx + 1][0] +  pos - start[t];
                }
                else
                {
                     dp[idx][flag] = min(dp[idx + 1][0] + end[t] - pos + end[t] - start[t], dp[idx + 1][1] + pos - start[t] + end[t] - start[t]);
                }
            }
        }
        return dp[0][0];
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> locations(n);
        for(int i=0;i<n;i++){
            cin>>locations[i];
        }
        
        
        vector<int> types(n);
        for(int i=0;i<n;i++){
            cin>>types[i];
        }
        
        Solution obj;
        long long res = obj.minTime(n, locations, types);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends