//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	int is_bleak(int n)
	{
	    // Code here.
	    int st = max(0, n - 32);
	    for (int i = st; i <= n; i++)
	    {
	        int x = i;
	        for (int j = 0; j < 32; j++)
	       {
	           if (i & (1<<j))
	           x++;
	       }
	       if (x == n)
	       return 0;
	    }
	    return 1;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends