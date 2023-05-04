//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxCoins(int n,vector<vector<int>> &ranges){
        // Code here
        sort(ranges.begin(), ranges.end());
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        int mx = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            while (!pq.empty() && pq.top().first <= ranges[i][0])
            {
                mx = max(mx, pq.top().second);
                pq.pop();
            }
            pq.push({ranges[i][1], ranges[i][2]});
            ans = max(ans, mx + ranges[i][2]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> a(n,vector<int>(3));
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1]>>a[i][2];
        }
        Solution ob;
        cout<<ob.maxCoins(n,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends