//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        // Code here 
        int t = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 'P')
            {
                int m = min(n, i + k + 1);
                while (t < m)
                {
                    if (arr[t] == 'T')
                    {
                        if (i - t <= k)
                        {
                            ans++;
                            t++;
                            break;
                        }
                    }
                    t++;
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
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n >> k;
		char arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		Solution obj;
		cout<<obj.catchThieves(arr, n, k) << endl;
	}
	return 0; 
} 


// } Driver Code Ends