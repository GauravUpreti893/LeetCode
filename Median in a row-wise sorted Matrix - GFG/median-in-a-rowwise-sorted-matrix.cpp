//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here     
        int lo = matrix[0][0];
        int hi = matrix[0][C - 1];
        for (int i = 1; i < R; i++)
        {
            lo = min(lo, matrix[i][0]);
            hi = max(hi, matrix[i][C - 1]);
        }
        int mid, ans = -1;
        while (lo <= hi)
        {
            mid = (lo + hi)/2;
            int count = 0;
            for (int i = 0; i < R; i++)
            {
                count += lower_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }
            if (count <= (R*C)/2)
            {
                ans = mid;
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
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
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends