//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int count(string &str, vector<int> &dp, vector<vector<bool>> &ispalindrome, int idx)
    {
        int n = str.size(), ans = n;
        if (idx == n)
        return 0;
        if (dp[idx] != -1)
        return dp[idx];
        for (int i = idx; i < n; i++)
        {
            if (ispalindrome[idx][i])
            ans = min(ans, 1 + count(str, dp, ispalindrome, i + 1));
        }
        return dp[idx] = ans;
    }
    int palindromicPartition(string str)
    {
        // code here
        int n = str.size();
        vector<vector<bool>> ispalindrome(n, vector<bool> (n, 0));
        for (int i = 0; i < n; i++)
        {
            int j = i - 1, k = i + 1;
            ispalindrome[i][i] = 1;
            while (j >= 0 && k < n && str[j] == str[k])
            ispalindrome[j--][k++] = 1;
            j = i, k = i + 1;
            while (j >= 0 && k < n && str[j] == str[k])
            ispalindrome[j--][k++] = 1;
        }
        vector<int> dp(n, -1);
        return count(str, dp, ispalindrome, 0) - 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends