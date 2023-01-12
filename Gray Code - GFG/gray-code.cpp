//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    vector<string> graycode(int n)
    {
        //code here
        int size = pow(2, n);
        vector<string> ans(size);
        for (int i = 0; i < size; i++)
        {
            int v = i ^ (i >> 1), r;
            string s;
            char c;
            while (v)
            {
                r = v & 1;
                c = r + '0';
                s = c + s;
                v = v >> 1;
            }
            int m = s.size();
            for (int i = m; i < n; i++)
            {
                s = '0' + s;
            }
            ans[i] = s;
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
        
        Solution ob;
        vector<string> ans= ob.graycode(n);
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
            
        cout<<"\n";
    }
}




// } Driver Code Ends