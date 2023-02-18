//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    bool stones(vector<int> &arr, vector<int> &vis, int i)
    {
        int idx = i + arr[i], n = arr.size();
        vis[i] = 1;
        bool res = false;
        if (idx >= 0 && idx < n)
        {
            if (vis[idx])
            {
                vis[i] = 2;
                vis[idx] = 2;
                return true;
            }
            else
            {
                res |= stones(arr, vis, idx);
                if (res)
                vis[i] = 2;
            }
        }
        if (!res)
        vis[i] = 0;
        return res;
    }
    int goodStones(int n,vector<int> &arr){
        // Code here
        vector<int> vis(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                stones(arr, vis, i);
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += ((vis[i] != 2)?1:0);
            // cout<<vis[i]<<endl;
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
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.goodStones(n,arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends