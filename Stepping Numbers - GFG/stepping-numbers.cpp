//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    int number(int v, int n, int m)
    {
        if (v > m)
        return 0;
        int ans = 0;
        if (v >= n && v <= m)
        {
            // cout<<v<<endl;
            ans++;
        }
        int r = v % 10;
        if (r != 9)
        {
            int a = v*10 + r + 1;
            ans += number(a, n, m);
        }
        if (r != 0) 
        {
            int b = v*10 + r - 1;
            ans += number(b, n, m);
        }
        return ans;
    }
    int steppingNumbers(int n, int m)
    {
        // Code Here
        int ans = 0;
        if (n == 0)
        ans++;
        for (int i = 1; i <= 9; i++)
        ans += number(i, n, m);
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    Solution obj;
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        cout << obj.steppingNumbers(n,m) << endl;
    }
	return 0;
}


// } Driver Code Ends