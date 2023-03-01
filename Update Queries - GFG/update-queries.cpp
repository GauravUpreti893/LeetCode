//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        vector<int> updateQuery(int N,int Q,vector<vector<int>> &U)
        {
            // code here
            int m = U.size();
            vector<vector<int>> sum(N + 1, vector<int> (17, 0));
            for (int j = 0; j < m; j++)
            {
                int l = U[j][0];
                int r = U[j][1];
                int x = U[j][2];
                for (int i = 0; i < 17; i++)
                {
                    if (x & (1 << i))
                    {
                        sum[l - 1][i]++;
                        sum[r][i]--;
                    }
                }
            }
            vector<int> freq(17, 0);
            vector<int> ans(N);
            for (int i = 0; i < N; i++)
            {
                int no = 0;
                for (int j = 0; j < 17; j++)
                {
                    freq[j] += sum[i][j];
                    if (freq[j])
                    {
                        no += 1<<j;
                    }
                }
                ans[i] = no;
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
        int n,q;
        cin>>n>>q;
        vector <vector <int>> u(q,vector <int>(3));
        for(int i=0;i<q;i++)
            cin>>u[i][0]>>u[i][1]>>u[i][2];
        Solution a;
        vector <int> ans=a.updateQuery(n,q,u);//<<endl;
        for(auto j:ans)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends