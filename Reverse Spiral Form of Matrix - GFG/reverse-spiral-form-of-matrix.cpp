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
        int i = 0, j = 0;
        while (true)
        {
            while (j < C && a[i][j] > 0)
            {
                ans.push_back(a[i][j]);
                a[i][j] = -a[i][j];
                j++;
            }
            i++;
            j--;
            if (i >= R || j >= C || i < 0 || j < 0 || a[i][j] < 0)
            break;
            while (i < R && a[i][j] > 0)
            {
                ans.push_back(a[i][j]);
                a[i][j] = -a[i][j];
                i++;
            }
            i--;
            j--;
            if (i >= R || j >= C || i < 0 || j < 0 || a[i][j] < 0)
            break;
            while (j >= 0 && a[i][j] > 0)
            {
                ans.push_back(a[i][j]);
                a[i][j] = -a[i][j];
                j--;
            }
            j++;
            i--;
            if (i >= R || j >= C || i < 0 || j < 0 || a[i][j] < 0)
            break;
            while (i >= 0 && a[i][j] > 0)
            {
                ans.push_back(a[i][j]);
                a[i][j] = -a[i][j];
                i--;
            }
            i++;
            j++;
            if (i >= R || j >= C || i < 0 || j < 0 || a[i][j] < 0)
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