//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
bool compare(string &s1, string &s2)
{
    if (s1.size() > s2.size())
    return true;
    else if (s1.size() < s2.size())
    return false;
    else
    {
        return s1 <= s2;
    }
}
class Solution
{
public:
    string longestString(vector<string> &words)
    {
        // code here
        int n = words.size();
        sort(words.begin(), words.end(), compare);
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[words[i]] = 1;
            // cout<<words[i]<<" ";
        }
        for (int i = 0; i < n; i++)
        {
            string str;
            int m = words[i].size();
            bool flag = true;
            for (int j = 0; j < m - 1; j++)
            {
                str += words[i][j];
                if (mp.find(str) == mp.end())
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            return words[i];
        }
        return "";
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends