// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int count(int v,vector<int>&arr)
    {
        int n = arr.size();
        int i = 0,j = n - 1, mid;
        while (i <= j)
        {
            mid = (i + j)/2;
            if (arr[mid] <= v)
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }
        return i;
    }
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here    
        int i = 1, j = 2000;
        int mid,n = 0, midpos = (r*c)/2;
        while (i <= j)
        {
            mid = (i + j)/2;
            n = 0;
            for (int k = 0; k < r; k++)
            {
                n += count(mid, matrix[k]);
            }
            if (n <= midpos)
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }
        return i;
    }
};

// { Driver Code Starts.

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
}  // } Driver Code Ends