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
        vector<vector<bool>> dp(2, vector<bool> (s + 1));
        for (int i = 0; i < 2; i++)
        dp[i][0] = 1;
        dp[0][arr[0]] = 1;
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j <= sum; j++)
            {
                if ((j - arr[i] >= 0))
                {
                    dp[i%2][j] = dp[!(i % 2)][j - arr[i]];
                }
                dp[i%2][j] = dp[i%2][j] || dp[!(i % 2)][j];
            }
        }
        return dp[(n - 1)%2][sum];
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