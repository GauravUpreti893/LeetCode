//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{

    public:
    bool check(string &A, string &B)
    {
        int n = A.size(), m = B.size();
        if (n < m)
        return false;
        vector<int> lis(m, 0);
        int i = 0;
        for (int j = 1; j < m; j++)
        {
            if (B[j] == B[i])
            {
                i++;
                lis[j] = i;
            }
            else
            {
                if (i)
                {
                    i = lis[i - 1];
                    j--;
                }
            }
        }
        i = 0;
        for (int j = 0; j < n; j++)
        {
            if (A[j] == B[i])
            {
                i++;
                if (i == m)
                return true;
            }
            else
            {
                if (i)
                {
                    i = lis[i - 1];
                    j--;
                }
            }
        }
        return false;
    }
    int repeatedStringMatch(string A, string B) 
    {
        // Your code goes here
        string add = A;
        int n = A.size(), m = B.size(), ans = 1, nadd = A.size(), count = 0;
        while (1)
        {
            if (check(A, B))
            return ans;
            if (n >= 2*m && count >= 1)
            break;
            A += add;
            n += nadd;
            ans++;
            count++;
        }
        return -1;
    }
  
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution obj;
        cout<<obj.repeatedStringMatch(A,B)<<"\n";
    }
    return 0;
}

// } Driver Code Ends