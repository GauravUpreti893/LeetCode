//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            //  code here
            vector<int> row(k + 2), col(k + 2);
            row[0] = 0;
            col[0] = 0;
            row[k + 1] = n + 1;
            col[k + 1] = m + 1;
            for (int i = 1; i <= k; i++)
            {
                row[i] = enemy[i - 1][0];
                col[i] = enemy[i - 1][1];
            }
            sort(row.begin(), row.end());
            sort(col.begin(), col.end());
            int mxr = 0, mxc = 0;
            for (int i = 1; i <= k + 1; i++)
            {
                mxr = max(mxr, row[i] - row[i - 1]);
                mxc = max(mxc, col[i] - col[i - 1]);
            }
            return (mxr - 1)* (mxc - 1);
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k;
        cin>>k;
        vector<vector<int>> e(k,vector<int>(2));
        for(int i=0;i<k;i++)
            cin>>e[i][0]>>e[i][1];
        Solution a;
        cout<<a.largestArea(n,m,k,e)<<endl;
    }
    return 0;
}
// } Driver Code Ends