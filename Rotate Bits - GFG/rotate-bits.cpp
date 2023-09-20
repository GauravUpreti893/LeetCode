//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            d %= 16;
            int ans1 = n, temp = 0, ans2 = n;
            for (int i = 15; i > 15 - d; i--)
            {
                if (ans1 & (1<<i))
                {
                    ans1 ^= (1<<i);
                    temp |= (1<<(i - 15 + d  - 1));
                }
            }
            ans1 <<= d;
            ans1 |= temp;
            temp = 0;
            for (int i = 0; i < d; i++)
            {
                if (ans2 & (1<<i))
                {
                    temp |= (1<<(15 - d + i + 1));
                }
            }
            ans2 >>= d;
            ans2 |= temp;
            return {ans1, ans2};
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends