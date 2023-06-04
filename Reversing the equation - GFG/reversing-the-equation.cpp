//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
    {
        //code here.
        int i = s.size() - 1;
        string ans;
        while (i >= 0)
        {
            string str;
            while (i >= 0 && s[i] >= '0' && s[i] <= '9')
            {
                str += s[i--];
            }
            reverse(str.begin(), str.end());
            ans += str;
            if (i >= 0)
            {
                ans += s[i--];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends