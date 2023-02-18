//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string& arr){
        // code here 
        int st = 0, i = 0, ans = 0;
        while (i < n)
        {
            if (arr[i] == 'O')
            {
                if (m)
                {
                    m--;
                }
                else
                {
                    ans = max(ans, i - st);
                    while (arr[st] != 'O')
                    {
                        st++;
                    }
                    st++;
                }
            }
            i++;
        }
        ans = max(ans, n - st);
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
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends