// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        int n = s1.length();
        int m = s2.length();
        if (n != m)
        return false;
        // vector<int> a1(26,0),a2(26,0);
        // for (int i = 0; i < n; i++)
        // {
        //     a1[s1[i] - 97]++;
        //     a2[s2[i] - 97]++;
        // }
        // for (int i = 0; i < 26; i++)
        // {
        //     if (a1[i] != a2[i])
        //     return false;
        // }
        string s3 = s1 + s1;
        for (int i = 0; i < n; i++)
        {
            if (s3.substr(i,n) == s2)
            return true;
        }
        return false;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}
  // } Driver Code Ends