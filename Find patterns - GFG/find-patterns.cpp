//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int numberOfSubsequences(string S, string W){
        // code here 
        int n = S.size(), m = W.size(), ans = 0,idx = 0;
        vector<int> visited(n, 0);
        queue<int> st;
        for (int i = 0; i < n; i++)
        {
            if (S[i] == W[0])
            {
                st.push(i);
            }
        }
        int start;
        while (!st.empty())
        {
            start = st.front();
            st.pop();
            if (visited[start])
            continue;
            visited[start] = 1;
            idx = 1;
            if (idx == m)
            {
                ans++;
                continue;
            }
            bool flag = false;
            for (int i = start + 1; i < n; i++)
            {
                if (visited[i])
                continue;
                if (S[i] == W[idx])
                {
                    idx++;
                    visited[i] = 1;
                    if (idx == m)
                    {
                        ans++;
                        flag = true;
                        break;
                    }
                }
            }
            if (!flag)
            break;
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
        string S,W;
        cin >> S >> W;
        Solution ob;
        cout << ob.numberOfSubsequences(S,W) << endl;
    }
    return 0; 
} 


// } Driver Code Ends