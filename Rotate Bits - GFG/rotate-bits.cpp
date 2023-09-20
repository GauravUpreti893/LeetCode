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
            int ans1 = n, ans2 = n, temp;
            temp = ~((1<<(15 - d + 1)) - 1);
            temp &= n;
            temp >>= (15 - d + 1);
            ans1 &= ((1<<(15 - d + 1)) - 1);
            ans1 <<= d;
            ans1 |= temp;
            
            temp = ((1<<d) - 1);
            temp &= n;
            temp <<= (15 - d + 1);
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