//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMinInsertions(string &s){
        // code here 
        string str = s;
        reverse(str.begin(), str.end());
        int n = s.size();
        vector<vector<int>> dp(2, vector<int> (n + 1, 0));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (s[i - 1] == str[j - 1])
                {
                    dp[i%2][j] = 1 + dp[!(i%2)][j - 1];
                }
                else
                {
                    dp[i%2][j] = max(dp[!(i%2)][j], dp[i%2][j - 1]);
                }
            }
        }
        return n - dp[n%2][n];
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.findMinInsertions(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends