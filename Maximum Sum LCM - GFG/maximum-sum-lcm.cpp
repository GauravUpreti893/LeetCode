//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long int maxSumLCM(int n) 
    {
        // code here
        long long ans = 0, s = sqrt(n);
        for (long long int i = 1; i <= s; i++)
        {
            if (n%i  == 0)
            {
                if (n/i == i)
                ans += i;
                else
                ans += n/i + i;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n;
        cin >> n ;
        Solution ob;
        cout<<ob.maxSumLCM(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends