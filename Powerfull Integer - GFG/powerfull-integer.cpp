//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    int powerfullInteger(int n,vector<vector<int>> &intervals,int k){
        // Code here
        sort(intervals.begin(), intervals.end());
        priority_queue<int, vector<int>, greater<int>> pq;
        int ans = -1, sub = 0;
        for (int i = 0; i < n; i++)
        {
            int x = intervals[i][0];
            int y = intervals[i][1];
            while (!pq.empty() && pq.top() < x)
            {
                sub++;
                if (pq.size() >= k)
                ans = max(ans, pq.top());
                pq.pop();
            }
            pq.push(y);
            if (i + 1 - sub >= k)
            {
                ans = max(ans, pq.top());
            }
        }
        while (pq.size() >= k)
        {
            ans = max(ans, pq.top());
            pq.pop();             
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vector<vector<int>> intervals(n,vector<int>(2));
        for(int i=0;i<n;i++){
            cin>>intervals[i][0]>>intervals[i][1];
        }
        cin>>k;
        Solution ob;
        cout<<ob.powerfullInteger(n,intervals,k)<<endl;
    }
    return 0;
}
// } Driver Code Ends