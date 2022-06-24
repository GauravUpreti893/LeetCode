// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int m = r;
        int n = c;
        int i = 0, i1 = m - 1, j = 0, j1 = n - 1,pos = 0;
        vector<int> ans(n*m);
        while (i <= i1 && j <= j1)
        {
            for (int k = j; k <= j1; k++)
            {
                ans[pos++] = matrix[i][k];
                
            }
            if (pos == (n*m))
                break;
            i++;
            for (int k = i; k <= i1; k++)
            {
                ans[pos++] = matrix[k][j1];
            }
            if (pos == (n*m))
                break;
            j1--;
            for (int k = j1; k >= j; k--)
            {
                ans[pos++] = matrix[i1][k];
            }
            if (pos == (n*m))
                break;
            i1--;
            for (int k = i1; k >= i; k --)
            {
                ans[pos++] = matrix[k][j];
            }
            if (pos == (n*m))
                break;
            j++;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends