//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here
        bool flag = false;
        int n = matrix.size(), m = matrix[0].size();
        for (int i = 0; i < m; i++)
        flag |= matrix[0][i];
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                matrix[i][0] |= matrix[i][j];
                matrix[0][j] |= matrix[i][j];
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (matrix[i][0])
            {
                for (int j = 0;  j < m; j++)
                matrix[i][j] = 1;
            }
        }
        for (int j = 0; j < m; j++)
        {
            if (matrix[0][j])
            {
                for (int i = 0; i < n; i++)
                matrix[i][j] = 1;
            }
        }
        
        if (flag)
        {
            for (int i = 0; i < m; i++)
            matrix[0][i] = 1;
        }
        return;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends