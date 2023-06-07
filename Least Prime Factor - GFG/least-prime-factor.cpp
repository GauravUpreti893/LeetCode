//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
unordered_map<int, int> isprime;
bool flag = true;
class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        // code here
        if (flag)
        {
            flag = false;
            for (int i = 2; i <= 1e5; i++)
            {
                int size = sqrt(i);
                bool f = true;
                for (int j = 2; j <= size; j++)
                {
                    if (i % j == 0)
                    {
                        f = false;
                        break;
                    }
                }
                if (f)
                isprime[i] = 1;
            }
        }
        vector<int> ans(n + 1, 0);
        ans[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            int size = sqrt(i);
            for (int j = 2; j <= size; j++)
            {
                if (i % j == 0 && isprime[j])
                {
                    ans[i] = j;
                    break;
                }
            }
            if (ans[i] == 0)
            {
                ans[i] = i;
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
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends