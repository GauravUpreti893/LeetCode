//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int>>& matrix, int n)
    {
        // code here 
        int mx = 0;
        vector<int> row(n), col(n);
        for (int i = 0; i < n; i++)
        {
            int sum = 0, sum1 = 0;
            for (int j = 0; j < n; j++)
            {
                sum += matrix[i][j];
                sum1 += matrix[j][i];
            }
            row[i] = sum;
            col[i] = sum1;
            mx = max(mx, sum);
            mx = max(mx, sum1);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int x = min(mx - row[i], mx - col[j]);
                row[i] += x;
                col[j] += x;
                ans += x;
            }
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends