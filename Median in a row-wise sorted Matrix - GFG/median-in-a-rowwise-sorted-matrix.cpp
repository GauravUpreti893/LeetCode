//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &a, int n, int m) {
        // code here
        //eg: 1 2 3 3    3    4 5 7 10    median will have 4 elements to its left
        //if countSmaller(x) > 4 then x cannot be ans but if it is <= 4 it might be ans 
        int low = 1, high = 2000, req = (n * m) / 2 ;
        int ans = -1;
    
        auto countSmaller = [&](int val) {
            int smaller = 0;
            for (int i = 0; i < n; i++) {
                smaller += lower_bound(a[i].begin(), a[i].end(), val) - a[i].begin();
            }
            return smaller;
        };
    
        while (low <= high) {
            int mid = (low + high) >> 1;
            int smallerElements = countSmaller(mid);
            if (smallerElements <= req) {
                ans = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
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