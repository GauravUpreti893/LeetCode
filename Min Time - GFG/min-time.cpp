//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long minimum(int idx, unordered_map<long long, long long> &start, unordered_map<long long, long long> &end, long long pos, vector<int> &type, bool flag, vector<vector<long long>> &dp)
    {
        int n = type.size();
        if (idx == n)
        return abs(pos);
        if (dp[idx][flag] != -1)
        return dp[idx][flag];
        int t = type[idx];
        if (pos <= start[t])
        {
            return dp[idx][flag] = minimum(idx + 1, start, end, end[t], type, 1, dp) + end[t] - pos;
        }
        else if (pos >= end[t])
        {
            return dp[idx][flag] = minimum(idx + 1, start, end, start[t], type, 0, dp) + pos - start[t];
        }
        else
        {
            return dp[idx][flag] = min(minimum(idx + 1, start, end, start[t], type, 0, dp) + end[t] - pos + end[t] - start[t],  minimum(idx + 1, start, end, end[t], type, 1, dp) + pos - start[t] + end[t] - start[t]);
        }
    }
    long long minTime(int n, vector<int> &locations, vector<int> &type) {
        // code here
        unordered_map<long long, long long> start, last;
        for (int i = 0; i < n; i++)
        {
            if (start.find(type[i]) == start.end())
            {
                start[type[i]] = locations[i];
            }
            else
            {
                start[type[i]] = min(start[type[i]], (long long)locations[i]);
            }
            if (last.find(type[i]) == last.end())
            {
                last[type[i]] = locations[i];
            }
            else
            {
                last[type[i]] = max(last[type[i]], (long long)locations[i]);
            }
        }
        vector<int> arr;
        for (auto it = start.begin(); it != start.end(); it++)
        {
            arr.push_back(it->first);
        }
        n = arr.size();
        sort(arr.begin(), arr.end());
        vector<vector<long long>> dp(n, vector<long long> (2, -1));
        return minimum(0,start, last, 0, arr, 0, dp);
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