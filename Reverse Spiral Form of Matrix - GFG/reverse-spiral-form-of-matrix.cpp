//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        // code here
        vector<int> ans;
        int is = 0, ie = R - 1, js = 0, je = C - 1;
        while (true)
        {
            for (int j = js; j <= je; j++)
            {
                ans.push_back(a[is][j]);
            }
            is++;
            if (is > ie || js > je || is < 0 || js < 0)
            break;
            for (int i = is; i <= ie; i++)
            {
                ans.push_back(a[i][je]);
            }
            je--;
            if (is > ie || js > je || is < 0 || js < 0)
            break;
            for (int j = je; j >= js; j--)
            {
                ans.push_back(a[ie][j]);
            }
            ie--;
            if (is > ie || js > je || is < 0 || js < 0)
            break;
            for (int i = ie; i>= is; i--)
            {
                ans.push_back(a[i][js]);
            }
            js++;
            if (is > ie || js > je || is < 0 || js < 0)
            break;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends