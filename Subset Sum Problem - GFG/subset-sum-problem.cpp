//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>&arr, int sum){
        // code here 
        int n = arr.size();
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            s += arr[i];
        }
        if (sum > s)
        return false;
        vector<vector<bool>> dp(s + 1, vector<bool> (n));
        for (int i = 0; i < n; i++)
        dp[0][i] = 1;
        dp[arr[0]][0] = 1;
        for (int i = 1; i <= s; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if ((i - arr[j] >= 0))
                {
                    dp[i][j] = dp[i - arr[j]][j - 1];
                }
                dp[i][j] = dp[i][j] || dp[i][j - 1];
            }
        }
        return dp[sum][n - 1];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends