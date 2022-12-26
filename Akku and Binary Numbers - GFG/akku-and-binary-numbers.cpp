//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public: 
    vector<long long> res;
    void precompute()
    {
        // Code Here
        vector<long long> value(60);
        long long n = 1;
        for (int i = 0; i < 60;  i++)
        {
            value[i] = n;
            n *= 2;
        }
        for (int i = 0; i < 60; i++)
        {
            for (int j = i + 1; j < 60; j++)
            {
                for (int k = j + 1; k < 60; k++)
                {
                    n = value[i] + value[j] + value[k];
                    res.push_back(n);
                }
            }
        }
        sort(res.begin(), res.end());
        return;
    }
    
    long long solve(long long l, long long r){
        // Code Here
        return upper_bound(res.begin(), res.end(), r) - lower_bound(res.begin(), res.end(), l);
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