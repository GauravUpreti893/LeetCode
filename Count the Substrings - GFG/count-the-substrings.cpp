//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
        unordered_map<int, int> mp;
        int ans = 0;
        mp[0] = 1;
        int n = S.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (S[i] >= 'A' && S[i] <= 'Z')
            sum++;
            else
            sum--;
            ans += mp[sum];
            mp[sum]++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends