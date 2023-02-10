//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool ispossible(vector<int> &arr, int sum, int idx, bool **dp)
    {
        if (!sum)
        return true;
        int n = arr.size();
        if (idx == n || sum < 0)
        return false;
        if (!dp[sum][idx])
        return dp[sum][idx];
        return dp[sum][idx] = (ispossible(arr, sum - arr[idx], idx + 1, dp) || ispossible(arr, sum, idx + 1, dp));
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        bool **dp = new bool*[sum + 1];
        for (int i = 0; i <= sum; i++)
        {
            dp[i] = new bool[n];
            for (int j = 0; j < n; j++)
            {
                dp[i][j] = 1;
            }
        }
        return ispossible(arr, sum, 0, dp);
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