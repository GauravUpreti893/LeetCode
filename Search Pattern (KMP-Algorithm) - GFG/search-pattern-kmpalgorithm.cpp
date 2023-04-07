//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string needle, string haystack)
        {
            //code hee.
            int n = haystack.size(), m = needle.size();
            vector<int> lis(m, 0);
            int i = 0;                               
            for (int j = 1; j < m; j++)
            {
                if (needle[j] == needle[i])
                {
                    lis[j] = ++i;
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
            vector<int> ans;
            for (int j = 0; j < n; j++)
            {
                if (haystack[j] == needle[i])
                {
                    i++;
                    if (i == m)
                    ans.push_back(j - m + 2);
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
            return ans;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends