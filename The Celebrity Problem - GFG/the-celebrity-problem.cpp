//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here
        int i = 1;
        int cel = 0;
        while (i < n)
        {
            if (M[cel][i] && !M[i][cel])
            {
                cel = i;
            }
            i++;
        }
        for (int i = 0; i < n; i++)
        {
            if (M[cel][i])
            {
                return -1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i != cel && (!M[i][cel]))
            return -1;
            
        }
        return cel;
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
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends