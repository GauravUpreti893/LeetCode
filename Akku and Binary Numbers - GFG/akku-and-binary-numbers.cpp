//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    void precompute()
    {
        // Code Here
    }
    
    long long solve(long long l, long long r){
        // Code Here
        long long ans = 0, n;
        vector<long long> value(60, 0);
        n = 1;
        for (int i = 59; i >= 0; i--)
        {
            value[i] = n;
            n *= 2;
        }
        for (int i = 0; i < 60; i++)
        {
            // s[i] = '1';
            for (int j = i + 1; j < 60; j++)
            {
                // s[j] = '1';
                for (int k = j + 1; k < 60; k++)
                {
                    // s[k] = '1';
                    n = value[i] + value[j] + value[k];
                    if (n >= l && n <= r)
                    {
                        ans++;
                    }
                    // s[k] = '0';
                }
                // s[j] = '0';
            }
            // s[i] = '0';
        }
        return ans;
    }
    
};



//{ Driver Code Starts.

int main()
{
    int t;
    Solution ob;
    ob.precompute();
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        cout << ob.solve(l, r) << endl; 
    }
    return 0;
}
// } Driver Code Ends